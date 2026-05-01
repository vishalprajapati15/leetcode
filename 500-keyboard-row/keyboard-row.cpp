class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set<char> row1 = {'q', 'w', 'e', 'r', 't','y', 'u', 'i', 'o', 'p'};
        unordered_set<char> row2 = {'a', 's', 'd', 'f', 'g','h', 'j', 'k', 'l'};
        unordered_set<char> row3 = {'z', 'x', 'c', 'v', 'b', 'n', 'm'};
        vector<string> result;
        for(string word: words){
            unordered_set<char>*row;
            char first = tolower(word[0]);
            if(row1.count(first)){
                row = &row1;
            }
            else if(row2.count(first)){
                row = &row2;
            }
            else{
                row = &row3;
            }
            bool valid = true;
            for(char ch: word){
                if(!row->count(tolower(ch))){
                    valid = false;
                    break;
                }
            }
            if(valid){
                result.push_back(word);
            }
        }
        return result;
    }
};