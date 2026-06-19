class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> mp;
        for(int num: arr1){
            mp[num]++;
        }
        vector<int>ans;
        for(int num: arr2){
            while(mp[num]>0){
                ans.push_back(num);
                mp[num]--;
            }
        }
        vector<int>rem;
        for(auto &it: mp){
            while(it.second>0){
                rem.push_back(it.first);
                it.second--;
            }
        }
        sort(rem.begin(), rem.end());
        ans.insert(ans.end(), rem.begin(), rem.end());
        return ans;
    }
};