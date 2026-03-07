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
        unordered_set<int>st;
        while (n != 1 && !st.count(n)) {
            st.insert(n);
            n = sol(n);
        }
        return n==1;
    }
};