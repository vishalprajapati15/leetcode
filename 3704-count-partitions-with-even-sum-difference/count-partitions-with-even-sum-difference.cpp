class Solution {
public:
    int countPartitions(vector<int>& nums) {
        long long total =0;
        for(int ele : nums){
            total += ele;
        }
        if(total %2!=0){
            return 0;
        }
        
        return nums.size()-1;
    }
};