class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n = nums.size();
        if(k == n){
            return nums;
        }
        vector<int>temp(nums);           // copy nums;
        nth_element(begin(temp), begin(temp) + k -1, end(temp), greater<int>());            // kth largest at right index 
        // O(n)
        int kthLargets = temp[k-1];
        int countKthlargest = count(begin(temp), begin(temp) + k, kthLargets);

        vector<int>ans;
        for(auto &num : nums){
            if(num > kthLargets){
                ans.push_back(num);
            }
            else if(num == kthLargets && countKthlargest > 0){
                ans.push_back(num); 
                countKthlargest--;
            }
            if(ans.size() == k){
                break;
            }
        }
        return ans;
    }
};