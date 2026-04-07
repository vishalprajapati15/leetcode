class Solution {
public:
    int binary(int num) {
        vector<int>bin;
        while(num != 0){
            int ld = num % 2;
            bin.push_back(ld);
            num /= 2;
        }
        reverse(bin.begin(), bin.end());
        for(int i=0;i<bin.size();i++){
            if(bin[i] == 1){
                bin[i] = 0;
            }
            else{
                bin[i] = 1;
            }
        }
        int ans = 0;
        int n = bin.size();
        for(int i=0;i<n;i++){
            ans = ans + bin[i]* (1<<(n-i-1));
        }
        return ans;

    }

    int findComplement(int num) {
        if (num == 0) {
            return 1;
        }

        int ans = binary(num);
        return ans;


    }
};