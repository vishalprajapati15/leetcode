class Solution {
public:
    string decodeString(string s) {
        stack<int>countSt;
        stack<string>stringSt;

        string cur = "";
        int k =0;

        for(char ch : s){
            if(isdigit(ch)){
                k = k*10 + (ch-'0');
            }
            else if(ch=='['){
                countSt.push(k);
                stringSt.push(cur);
                k=0;
                cur = "";
            }
            else if(ch == ']'){
                int repeat = countSt.top();
                countSt.pop();
                string temp = stringSt.top();
                stringSt.pop();
                while(repeat--){
                    temp += cur;
                }
                cur = temp;
            }
            else{
                cur += ch;
            }
        }
        return cur;
    }
};