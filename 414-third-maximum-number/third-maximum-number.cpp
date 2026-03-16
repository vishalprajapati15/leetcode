class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_set<int>st;
        for(int num : nums){
            st.insert(num);
        }
        vector<int>temp;
        for(int ele : st){
            temp.push_back(ele);
        }

        sort(temp.begin(), temp.end());
        int n = temp.size();
        if(n<3){
            return temp[n-1];
        }
        return temp[n-3];
    }
};