class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        int ans = -1;
        int tempAns = -1;
        for(int i=0;i<nums.size()-1;i++){
            for(int j = i+1;j<nums.size();j++){
                tempAns = nums[j] - nums[i];
                ans = max(ans, tempAns);
            }
        }
        if(ans <= 0){
            return -1;
        }
        return ans;
    }
};