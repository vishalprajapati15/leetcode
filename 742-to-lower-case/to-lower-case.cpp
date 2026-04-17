class Solution {
public:
    string toLowerCase(string s) {
        int n = s.size();
        string ans = "";
        for (int i = 0; i < n; i++) {
            if((s[i] >= 'A') && (s[i] <= 'Z')){
                char ch = char(s[i] + 32);
                ans += ch;
            }
            else{
                ans += s[i];
            }
        }
        return ans;
    }
};