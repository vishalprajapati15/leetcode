class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int>ans;
        vector<int> map(10, 0);
        for(int &digit : digits){
            map[digit]++;
        }
        
        for(int i=1; i<=9;i++){
            if(map[i] == 0){
                continue;
            }
            map[i]--;
            for(int j = 0;j<=9;j++){
                if(map[j] == 0){
                    continue;
                }
                map[j]--;
                for(int k =0; k<9; k += 2){
                    if(map[k] == 0){
                        continue;
                    }
                    map[k]--;
                    int num = i * 100 + j * 10 + k * 1;
                    ans.push_back(num);
                    map[k]++;
                }
                map[j]++;
            }
            map[i]++;
        }
        return ans;
    }
};