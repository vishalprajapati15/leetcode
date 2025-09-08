class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size();
        int m = t.size();
        int count = 0;
        for(int i=0;i<n;i++){
            while(count < m && t[count] != s[i]){
                count++;
            }
            if(count == m){
                return false;
            }
            count++;
        }
        return true;
    }
};