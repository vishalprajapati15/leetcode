class Solution {
public:
    bool nonZero(int x){
        while(x){
            if(x % 10 == 0){
                return false;
            }
            x=x/10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {

        for(int i =1;i<n;i++){
            int b = n-i;
            if(nonZero(i) && nonZero(b)){
                return {i, b};
            }
        }
        return {};
    }
};