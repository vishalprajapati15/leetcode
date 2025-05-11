class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        if(arr.size() < 3){
            return 0;
        }
        int num1, num2, num3;
        for(int i=0;i< arr.size()-2; i++){
            num1 = arr[i];
            num2 = arr[i+1];
            num3 = arr[i+2];
            if((num1 % 2 != 0) && (num2 %2 != 0) && (num3 % 2 != 0)){
                return 1;
            }
        }
        return 0;
    }
};