class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1 = 0;
        long long sum2 = 0;
        long long zeroCount1 = 0;
        long long zeroCount2 = 0;
        for(int & num : nums1){
            sum1 += num;
            if(num == 0){
                zeroCount1 += 1;
                sum1 += 1;
            }
        }
        for(int & num : nums2){
            sum2 += num;
            if(num == 0){
                zeroCount2 += 1;
                sum2 += 1;
            }
        }
        if(sum1 < sum2 && zeroCount1 == 0){
            return -1;
        }
        if(sum2 < sum1 && zeroCount2 == 0){
            return -1;
        }
        return max(sum1, sum2);
    }
};