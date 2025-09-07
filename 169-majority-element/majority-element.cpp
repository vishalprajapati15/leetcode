class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int target = nums.size()/2;
        map<int, int> arr;
        for(int i =0;i<nums.size();i++){
            arr[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(arr[nums[i]] > target){
                return nums[i];
            }
        }
        return -1;
    }
};