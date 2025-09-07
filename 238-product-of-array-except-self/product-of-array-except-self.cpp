class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int count_zero = 0;
        int product_without_zero = 1;
        for(int &num : nums){
            if(num == 0){
                count_zero++;
            }
            else{
                product_without_zero *= num;
            }
        }
        vector<int> vec(n);
        for(int i = 0;i<n;i++){
            int num = nums[i];

            if(num != 0){
                if(count_zero > 0){
                    vec[i] = 0;
                }
                else{
                    vec[i] = product_without_zero / nums[i];
                }
            }
            else{
                if(count_zero > 1){
                    vec[i] = 0;
                }
                else{
                    vec[i] = product_without_zero;
                }
            }
        }
        return vec;
    }
};