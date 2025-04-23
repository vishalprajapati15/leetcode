class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans(prices.size());
        stack<int>st;
        for(int i=0;i< prices.size(); i++){
            while(!st.empty() && prices[st.top()] >= prices[i]){
                int idx = st.top();
                st.pop();
                ans[idx] = prices[idx] - prices[i];
            }
            st.push(i);
        }
        while(!st.empty()){
            int idx = st.top();
            st.pop();
            ans[idx] = prices[idx];
        }
        return ans;
    }
};