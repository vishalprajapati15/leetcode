class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n = s.size();
        if(n<k){
            return false;
        }
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