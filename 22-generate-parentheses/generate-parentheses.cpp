class Solution {
public:

    void backTrack(int open, int close, int n, string curr, vector<string>&result){
        if(curr.size() == 2*n){
            result.push_back(curr);
            return;
        }
        if(open < n){
            backTrack(open+1, close, n, curr+ "(", result);
        }
        if(close < open){
            backTrack(open, close+1, n, curr+ ")", result);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string>result;
        backTrack(0,0,n,"", result);
        return result;
    }
};