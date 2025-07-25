class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int>st;
        int ans = 0;
        int negative = INT_MIN;
        for(int i =0;i<nums.size();i++){
            if(nums[i] >= 0){
                st.insert(nums[i]);
            }
            else{
                negative = max(negative, nums[i]);
            }
        }
        
        if(st.size() > 0){
            for(auto ele : st){
                ans += ele;
            }
        }
        else{
            ans = negative;
        }
        return ans;
    }
};