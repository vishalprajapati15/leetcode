class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> lower(26,0);
        vector<int> upper(26,0);
        for(char ch: word){
            if(islower(ch)){
                lower[ch-'a']++;
            }
            else if(isupper(ch)){
                upper[ch-'A']++;
            }
        }
        int count =0;
        for(int i=0;i<26;i++){
            if(lower[i] >= 1 && upper[i]>=1){
                count++;
            }
        }
        return count;
    }
};