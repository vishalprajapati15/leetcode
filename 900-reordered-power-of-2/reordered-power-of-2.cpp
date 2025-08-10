class Solution {
public:
    string sortedString(int num){
        string st = to_string(num);
        sort(st.begin(), st.end());
        return st;
    }

    bool reorderedPowerOf2(int n) {
        string st = sortedString(n);
        for(int pow=0; pow<30;pow++){
            if(st == sortedString(1<< pow)){            // 1 << power times gives 2 to the power power times;
                return true;
            }

        }
        return false;
    }
};