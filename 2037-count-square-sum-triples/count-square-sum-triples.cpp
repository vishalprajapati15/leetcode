class Solution {
public:
    int countTriples(int n) {
        int count = 0;
        for(int a=1;a<=n;a++){
            for(int b= a+1; b<=n;b++ ){
                long long sum = 1LL*a*a + 1LL*b*b;
                long c = sqrt(sum);
                if(c*c == sum && c<= n){
                    count++;
                }
            }
        }
        return count*2;
    }
};