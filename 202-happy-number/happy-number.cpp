class Solution {
public:
    int sol(int num) {
        int sum = 0;
        while (num) {
            int ld = num % 10;
            num = num / 10;
            sum += ld * ld;
        }
        return sum;
    }

    bool isHappy(int n) {
        while (n != 1 && n!= 4) {
            n = sol(n);
        }
        return n==1;
    }
};