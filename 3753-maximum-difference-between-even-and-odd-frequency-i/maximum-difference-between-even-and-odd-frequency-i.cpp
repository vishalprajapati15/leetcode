class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> mp;
        int freq1 = INT_MIN;
        int freq2 = INT_MAX;
        for(char ch : s){
            mp[ch]++;
        }
        bool hasOdd = false;
        bool hasEven = false;
        for(auto ele : mp){
            if(ele.second % 2 == 1){
                hasOdd = true;
                freq1 = max(freq1, ele.second);
            }
            else{
                hasEven = true;
                freq2 = min(freq2, ele.second);
            }
        }
        if(hasOdd && hasEven){
            return freq1 - freq2;
        }
        return -1;
    }
};