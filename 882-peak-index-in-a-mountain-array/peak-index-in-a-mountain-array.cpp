class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int ans = -1;
        for(int i =0;i<n;i++){
            ans = max(ans, arr[i]);
        }
        
        for(int i=0;i<n;i++){
            if(arr[i] == ans){
                return i;
            }
        }
        return -1;
    }
};