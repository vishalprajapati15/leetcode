class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int>ans;
        for(auto ele : mp){
            if(ele.second > 1){
                ans.push_back(ele.first);
            }
        }
        return ans;
    }
};