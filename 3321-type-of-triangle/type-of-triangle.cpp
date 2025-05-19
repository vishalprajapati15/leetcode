class Solution {
public:
    string triangleType(vector<int>& nums) {
        int a = nums[0];
        int b = nums[1];
        int c = nums[2];
        bool valid = a + b > c && b + c > a && a + c > b;
        if(valid){
            if(a == b && a == c && b == c){
            return "equilateral";
            }
            else if(a != b && a != c && b != c){
                return "scalene";
            }
            else{
                return "isosceles";
            }
        }
        else{
            return "none";
        }
    }
};