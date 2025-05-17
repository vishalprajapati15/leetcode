class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count_0 = 0, count_1 = 0, count_2 = 0;
        for(int i=0;i<nums.size(); i++){
            if(nums[i] == 0){
                count_0 ++;
            }
            else if(nums[i] == 1){
                count_1 ++;
            }
            else{
                count_2 ++;
            }
        }
        int idx = 0;
        for(int i=0;i<count_0;i++){
            nums[idx] = 0;
            idx++;
        }
        for(int i=0;i<count_1;i++){
            nums[idx] = 1;
            idx++;
        }
        for(int i=0;i<count_2;i++){
            nums[idx] = 2;
            idx++;
        }
    }
};