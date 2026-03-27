class Solution {
public:
    string toHex(int num) {
        if(num == 0){
            return "0";
        }

        unsigned int n = num;

        char hexChar[]  = {"0123456789abcdef"};

        string ans ="";
        while(n>0){
            int rem = n % 16;
            ans += hexChar[rem];
            n /= 16;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};