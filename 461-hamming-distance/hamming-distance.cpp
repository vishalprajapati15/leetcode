class Solution {
public:
    int hammingDistance(int x, int y) {
        int xr = x ^ y;
        int dif =0;
        while(xr>0){
            dif  += xr & 1;
            xr = xr>>1;
        }
        return dif;
    }
};