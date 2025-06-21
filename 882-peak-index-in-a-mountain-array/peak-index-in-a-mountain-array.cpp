class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i = 0;
        int j = i+1;
        int k = i+2;
        for(int i=0;i<arr.size()-2;i++){
            if(arr[j]> arr[i] && arr[j]> arr[k]){
                return j;
            }
            else{
                j++;
                k++;
            }
        }
        return -1;
    }
};