class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int row = matrix.size();
        int col = matrix[0].size();

        vector<pair<int,int>> temp;


        for(int i = 0;i<matrix.size();i++) {
            for(int j = 0;j < matrix[i].size();j++) {
                if(matrix[i][j] == 0) {
                    temp.push_back({i,j});
                }
            }
        }


        for(int i = 0;i<temp.size();i++) {
            for(int k = 0;k < col;k++) {
                matrix[temp[i].first][k] = 0; 
            }

            for(int k = 0;k<row;k++) {
                matrix[k][temp[i].second] = 0;
            }

        }


    }
};