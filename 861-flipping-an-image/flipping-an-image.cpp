class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int r = image.size();
        int c = image[0].size();
        vector<vector<int>> temp;
        for(int i=0;i<r;i++){
            vector<int>row;
            for(int j=c-1;j>=0;j--){
                row.push_back(image[i][j]);
            }
            temp.push_back(row);
        }
        for(int i=0;i<r;i++){
            for(int j =0;j<c;j++){
                if(temp[i][j]==1){
                    temp[i][j]=0;
                }
                else{
                    temp[i][j]=1;
                }
            }
        }
        return temp;
    }
};