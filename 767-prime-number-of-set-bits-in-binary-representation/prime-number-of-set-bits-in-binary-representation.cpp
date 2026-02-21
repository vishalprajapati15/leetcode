class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int count =0;
        int primeMask = 665772;
        for(int i=left;i<=right;i++){
            int bits = __builtin_popcount(i);

            if((primeMask >> bits) & 1){
                count++;
            }
        }
        return count;
    }
};