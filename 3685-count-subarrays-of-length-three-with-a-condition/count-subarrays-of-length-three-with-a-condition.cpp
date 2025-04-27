class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        if(nums.size()<3){
            return 0;
        }
        int count = 0;
        for(int i=0;i<nums.size()-2; i++){
            if((float)nums[i+1]/2 == (float)(nums[i]+nums[i+2])){
                count++;
            }
        }
        return count;
    }
};