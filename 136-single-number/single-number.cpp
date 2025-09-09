class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int temp = 0;
        for(int i =0;i<nums.size(); i++){
            temp = temp ^ nums[i];
        }
        return temp;
    }

    /*0^0 = 0
    1^0 = 1
    0^1 = 1
    1^1 = 0*/


};