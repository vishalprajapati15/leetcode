class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int maxDiff = INT_MIN;
        int n = nums.size();
        for(int i=1;i<n;i++){
            maxDiff = max(maxDiff, abs(nums[i] - nums[i-1]));
        }
        maxDiff = max(maxDiff, abs(nums[n-1] - nums[0]));
        return maxDiff;
    }
};