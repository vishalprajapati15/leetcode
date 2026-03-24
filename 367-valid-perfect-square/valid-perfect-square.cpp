class Solution {
public:
    bool isPerfectSquare(int num) {
        int rootNum = sqrt(num);

        return rootNum*rootNum == num; 
    }
};