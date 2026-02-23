class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n = s.size();
        unordered_set<string> st;
        int code = pow(2, k);
        for(int i=k; i<=n;i++){
            string sub = s.substr(i-k, k);
            if(!st.count(sub)){
                st.insert(sub);
                code --;
            }
            if(code == 0){
                return true;
            }
        }
        return false;
    }
};