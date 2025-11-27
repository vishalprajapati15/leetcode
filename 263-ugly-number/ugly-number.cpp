class Solution {
public:
    bool checkIfUgly(int n){
        if(n ==1){
            return 1;
        }
        if(n>1){
            if(n%2 == 0){
                return checkIfUgly(n/2);
            }else if(n%3==0){
                return checkIfUgly(n/3);
            }else if(n%5==0){
                return checkIfUgly(n/5);
            }else{
                return 0;
            }
        }
        return false;
    }
    bool isUgly(int n) {
        return checkIfUgly(n);
    }
    
};