class Solution {
public:
    int findClosest(int x, int y, int z) {
        int person_x = abs(z-x);
        int person_y = abs(z-y);
        if(person_x < person_y){
            return 1;
        }
        else if(person_x > person_y){
            return 2;
        }
        return 0;
    }
};