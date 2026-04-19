class Solution {
public:

    string reverse(string s){
        int n = s.size();
        string ans ="";
        for(int i=n-1;i>=0;i--){
            ans += s[i];
        }
        return ans;
    }

    string reverseWords(string s) {
        int n = s.size();
        string temp = "";
        string ans = "";
        for(int i=0;i<n;i++){
            if(s[i] == ' '){
                ans += reverse(temp);
                ans += ' ';
                temp = "";
            }
            else{
                temp+= s[i];
            }
        }
        if(temp.size()){
            ans += reverse(temp);
        }
        return ans;
    }
};