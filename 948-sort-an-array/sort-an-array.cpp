class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int &num : nums){
            mp[num]++;
        }   
        int mini = *min_element(begin(nums), end(nums));
        int maxi = *max_element(begin(nums), end(nums));

        int i=0;

        for(int num = mini; num<=maxi; num++){
            while(mp[num] > 0){
                nums[i++] = num;
                mp[num]--;
            }
        }
        return nums;
    }
};