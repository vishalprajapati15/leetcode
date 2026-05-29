class Solution {
public:

    int sumofdigit(int num){
        int sum =0;
        while(num!=0){
            int ld = num%10;
            sum += ld;
            num = num/10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int ans = sumofdigit(nums[0]);
        for(int i=1;i<nums.size();i++){
            ans = min(ans, sumofdigit(nums[i]));
        }
        return ans;
    }
};