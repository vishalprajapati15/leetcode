class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int count = 0;
        if(nums.size() < 3){
            return 0;
        }
        for(int i=0;i<nums.size()-2;i++){
            int p = nums[i];
            int q = nums[i+1];
            int r = nums[i+2];
            if( (p + r) == q/2.0){
                count++;
            }
        }
        return count;
    }
};