class Solution {
public:
    string convertToBase7(int num) {
        vector<int> vec;
        while(num != 0){
            int ld = num % 7;
            vec.push_back(ld);
            num /= 7;
        }

        reverse(vec.begin(), vec.end());

        int ans = 0;
        for(int i=0;i<vec.size();i++){
            ans = (ans * 10) + vec[i];
        }
        return to_string(ans);
    }
};