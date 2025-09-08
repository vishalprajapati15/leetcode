class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> set(nums.begin(), nums.end());

        if(n == 1 && nums[0] == 1){
            return 2;
        }

        for(int i=1;i <= n; i++){
            if(set.find(i) == set.end()){
                return i;
            }
        }
        return n+1;
    }
};