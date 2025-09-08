class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size();
        int m = t.size();
        int j = 0;
        for(int i=0;i<n;i++){
            while(j<m && t[j] != s[i]){
                j++;
            }
            if(j == m){
                return false;
            }
            j++;
        }
        return true;
    }
};