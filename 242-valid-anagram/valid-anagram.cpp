class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()){
            return false;
        }

        vector<int>freqS(26, 0);
        vector<int>freqT(26, 0);

        for(char ch : s){
            freqS[ch -'a']++;
        }

        for(char ch : t){
            freqT[ch -'a']++;
        }

        for(int i=0;i<26;i++){
            if(freqS[i] != freqT[i]){
                return false;
            }
        }

        return true;
    }
};