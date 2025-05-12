class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> ans;
        unordered_set<int>set;
        for(int i=0; i<digits.size();i++){
            for(int j = 0; j<digits.size(); j++){
                for(int k = 0; k<digits.size(); k++){
                    if(i == j || i == k || j == k){
                        continue;
                    }
                    int digit = digits[i] * 100 + digits[j] * 10 + digits[k];
                    if(digit >= 100 && digit % 2 == 0){
                        // ans.push_back(digit);
                        set.insert(digit);
                    }
                }
            }
        }
        for(int ele : set){
            ans.push_back(ele);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};