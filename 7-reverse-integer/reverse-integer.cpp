class Solution {
public:
    int reverse(int num) {
        int sign = 0;
        if(num==0){
            return 0;
        }
        int ans = 0;
        while(num != 0){
            int digit = num % 10;
            if(ans > INT_MAX / 10){
                return 0;
            }
            if(ans < INT_MIN/ 10){
                return 0;
            }
            ans = ans* 10 + digit;
            num = num/10;
        }
        return ans;
    }
};