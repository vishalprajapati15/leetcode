class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        if(n < 3){
            return -1;
        }
        unordered_map<int, int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int ans = INT_MAX;
        for(int i=0;i<n-2;i++){
            if(mp[nums[i]] >= 3){
                mp[nums[i]]--;
                for(int j =i+1;j<n-1;j++){
                    for(int k = j+1;k<n;k++){
                        if((nums[i] == nums[j]) && (nums[i] == nums[k])){
                            int sum = abs(i-j) + abs(j-k) + abs(k-i);
                            ans = min(ans, sum);
                        }
                    }
                }
            }
        }
        return ans < INT_MAX ? ans: -1;
    }
};