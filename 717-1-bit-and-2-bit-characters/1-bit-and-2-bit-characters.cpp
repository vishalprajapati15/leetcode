class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i = 0;
        
        while (i < bits.size() - 1) {
            if (bits[i] == 1)
                i += 2; // two-bit character
            else
                i += 1; // one-bit character
        }
        
        return i == bits.size() - 1;
    }
};