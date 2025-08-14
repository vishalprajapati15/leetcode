class Solution {
public:
    string largestGoodInteger(string num) {
        int n = num.size();
        string ans = "";
        if(n<3){
            ans;
        }
        for(int i=0;i<n-2;i++){
            if(num[i] == num[i+1] && num[i] == num[i+2]){
                string triplet(3, num[i]);
                ans = max(ans, triplet);
            }
        }
        return ans;
    }
};