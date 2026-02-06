class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int maxLen = 1;
        int left =0;
        for(int i=0;i<n;i++){
            while(nums[i] > (long long)nums[left]*k){
                left++;
            }
            maxLen = max(maxLen, i-left+1);
        }
        return n-maxLen;
    }
};