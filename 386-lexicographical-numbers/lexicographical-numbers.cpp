class Solution {
public:
    void solution(int curr, int n, vector<int> & ans){
        if(curr > n){
            return ;
        }
        ans.push_back(curr);
        for(int append = 0; append <= 9; append ++){
            int newNum = (curr * 10) + append;
            if(newNum > n){
                return ;
            }
            solution(newNum, n, ans);
        }
    }
    vector<int> lexicalOrder(int n) {
        vector<int>ans;
        for(int startNum = 1; startNum <= 9;startNum ++){
            solution(startNum, n, ans);
        }
        return ans;
    }
};