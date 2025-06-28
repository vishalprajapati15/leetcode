class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n =  nums.size();
        if(k == n){
            return nums;
        }
        vector<pair<int, int>> vec(n);
        for(int i=0;i<n;i++){
            vec[i] = make_pair(i, nums[i]);
        }
        auto lambda = [](auto & p1, auto &p2){
            return p1.second > p2.second; // sorting
        };
        sort(begin(vec), end(vec), lambda);
        sort(begin(vec), begin(vec) + k);    // top k element presentin correct order
        vector<int>ans(k);
        for(int i=0;i<k;i++){
            ans[i] = vec[i].second;
        }
        return ans;

    }
};