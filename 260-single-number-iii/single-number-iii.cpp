class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int>vec;
        for(int i =0; i< nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto num : mp){
            if(num.second == 1){
                vec.push_back(num.first);
            }
        }
        return vec;
    }
};