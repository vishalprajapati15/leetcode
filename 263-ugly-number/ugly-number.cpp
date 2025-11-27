class Solution {
public:
    bool isUgly(int n) {
        int prime[3] = {2, 3, 5};
        if(n < 1){
            return false;
        }
        if(n==1){
            true;
        }
        for(int p : prime){
            while(n%p == 0){
                n/=p;
            }
        }
        return n == 1;
    }
};