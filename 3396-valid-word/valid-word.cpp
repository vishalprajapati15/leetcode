class Solution {
public:
    bool isValid(string word) {
        if(word.length() < 3){
            return false;
        }
        bool hasVowel = false;
        bool hasConsonent = false;

        for(char ch : word){
            if(isalpha(ch)){
                ch = tolower(ch);
                if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                    hasVowel = true;
                }
                else{
                    hasConsonent = true;
                }
            }
            else if(!isdigit(ch)){
                return false;
            }
        }
        return hasVowel && hasConsonent;
    }
};