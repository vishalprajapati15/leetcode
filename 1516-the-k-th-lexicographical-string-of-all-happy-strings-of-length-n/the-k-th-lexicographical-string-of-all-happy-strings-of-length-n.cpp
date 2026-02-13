class Solution {
public:

string res ="";
int count =0;
    void backTrack(string &curr,int n, int k){
        if(!res.empty()){
            return;
        }
        if(curr.size()==n){
            count++;
            if(count ==k){
                res = curr;
            }
            return;
        }

        for(char ch : {'a', 'b', 'c'}){
            if(curr.empty() || curr.back() !=ch){
                curr.push_back(ch);
                backTrack(curr, n, k);
                curr.pop_back();
            }
        }
    }
    string getHappyString(int n, int k) {
        int total = 3*(1<<(n-1));
        if(k>total){
            return "";
        }
        string curr ="";
        backTrack(curr, n, k);
        return res;
    }
};