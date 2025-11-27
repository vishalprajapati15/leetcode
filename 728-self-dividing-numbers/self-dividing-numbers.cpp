class Solution {
public:

    bool isSelfDividing(int n){
        int temp = n;
        while(temp != 0){
            int ld = temp%10;
            if(ld == 0 || n %ld != 0 ){
                return false;
            }
            temp/=10;
        }
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>arr;
        for(int i = left; i <= right; i++){
            if(isSelfDividing(i)){
                arr.push_back(i);
            }
        }
        return arr;
    }
};