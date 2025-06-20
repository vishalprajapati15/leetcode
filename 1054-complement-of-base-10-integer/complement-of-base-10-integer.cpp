class Solution {
public:
    int bitwiseComplement(int n) {
        int m = n;
        if(n == 0){
            return 1;       // edge case
        }
        int mask = 0;
        while(m != 0){
            mask = (mask << 1) | 1;         //create mask by left shift ans OR with 1;
            m = m >> 1;                     // m ko right shift krke 0 kiya 
        }
        return (~n) & mask;                 // not of n AND with mask ; 
    }
};