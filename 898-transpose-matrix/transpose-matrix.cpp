class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>>ans;
        
        int r = matrix.size();
        int c = matrix[0].size();
        for(int i =0;i<c;i++){
            vector<int>row;
            for(int j=0;j<r;j++){
                row.push_back(matrix[j][i]);
            }
            ans.push_back(row);
        }
        return ans;
    }
};