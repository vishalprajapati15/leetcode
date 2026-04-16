class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> count, first, last;

        // Step 1: Fill maps
        for (int i = 0; i < nums.size(); i++) {
            if (first.find(nums[i]) == first.end()) {
                first[nums[i]] = i; 
            }
            last[nums[i]] = i; 
            count[nums[i]]++;  
        }

        int degree = 0;
        for (auto& p : count) {
            degree = max(degree, p.second);
        }

        int minLength = nums.size();
        for (auto& p : count) {
            if (p.second == degree) {
                int num = p.first;
                int length = last[num] - first[num] + 1;
                minLength = min(minLength, length);
            }
        }

        return minLength;
    }
};