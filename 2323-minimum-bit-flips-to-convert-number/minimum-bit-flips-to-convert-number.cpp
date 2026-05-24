class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xr = start ^ goal;
        int count =0;
        while(xr>0){
            count+= xr & 1;
            xr = xr>>1;
        }
        return count;
    }
};