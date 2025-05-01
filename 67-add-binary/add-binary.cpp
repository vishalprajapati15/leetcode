class Solution {
public:
    string addBinary(string a, string b) {
        int a1 = a.size();
        int b1 = b.size();
        string s;
        if(a1 > b1){
           b = s.append(a1 - b1, '0') + b;
        }
        else if(b1 > a1){
            a = s.append(b1 - a1, '0') + a;
        }
        int carry = 0;
        string ans;
        for(int i= a.size() - 1; i>= 0; i--){
            int sum = (a[i] - '0' + b[i] - '0') + carry;
            ans = to_string(sum % 2) + ans;
            carry = sum / 2;
        }
        if(carry != 0){
            ans = '1' + ans;
        }
        return ans;
    }
};