class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        return {firstPosition(nums, target), lastPosition(nums, target)};
    }

    int firstPosition(vector<int> & nums, int target){
        int left = 0;
        int right = nums.size()-1;
        int position = -1;
        while(left <= right){
            int mid = left + (right - left)/2;
            if(nums[mid] == target){
                position = mid;
                right = mid - 1;
            }
            else if(nums[mid] < target){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        return position;
    }

    int lastPosition(vector<int> & nums, int target){
        int left = 0;
        int right = nums.size()-1;
        int position = -1;
        while(left <= right){
            int mid = left + (right - left)/2;
            if(nums[mid] == target){
                position = mid;
                left = mid + 1;
            }
            else if(nums[mid] < target){
                left = mid +1;
            }
            else{
                right = mid - 1;
            }
        }
        return position ;
    }
};