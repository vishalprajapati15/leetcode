class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        int n = nums.size();
        int ans=1;
        int curr=1;
        for(int i=0;i<n-1;i++){
            if(nums[i] < nums[i+1]){
                curr++;
            }
            else{
                curr=1;
            }
            ans = max(ans, curr);
        }
        return ans;
    }
};