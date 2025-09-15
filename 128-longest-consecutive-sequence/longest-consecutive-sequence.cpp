class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 1;
        int maxCount = 1;
        int n = nums.size();
        if(n <= 0){
            return 0;
        }
        for(int i=0;i<n-1;i++){
            if(nums[i] == nums[i+1]){
                continue;
            }
            else if(nums[i]+1 == nums[i+1]){
                count++;
            }
            else{
                maxCount = max(maxCount, count);
                count = 1;
            }
        }
        return max(maxCount, count);
    }
};