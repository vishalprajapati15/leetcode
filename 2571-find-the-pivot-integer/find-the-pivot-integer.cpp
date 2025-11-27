class Solution {
public:
    int pivotInteger(int n) {
        int x = n;
        long long total =  x * (x+1)/2;
        int num =  (int)sqrt(total);
        if(num*num == total){
            return num;
        }
        return -1;
    }
};