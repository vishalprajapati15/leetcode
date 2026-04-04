class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increasing = true;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] <= nums[i+1]){
                increasing = true;
            }
            else{
                increasing = false;
                break;
            }
        }

        bool decreasing = true;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] >= nums[i+1]){
                decreasing = true;
            }
            else{
                decreasing = false;
                break;
            }
        }
        return increasing || decreasing;
    }
};