class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n = matrix[0].size();
        int m = matrix.size();
        int srow = 0;
        int erow = matrix.size()-1;
        int scol = 0;
        int ecol = matrix[0].size()-1;

        while(srow <= erow && scol <= ecol) {
            for(int i = scol;i <= ecol;i++) {
                ans.push_back(matrix[srow][i]);
            }

            for(int i = srow+1;i<=erow;i++) {
                ans.push_back(matrix[i][ecol]);
            }

            for(int i = ecol-1;i>=scol;i--) {
                if(erow == srow) break;

                ans.push_back(matrix[erow][i]);

            }

            for(int i = erow-1;i>=srow+1;i--) {
                if(ecol == scol) break;

                ans.push_back(matrix[i][scol]);
            }

            srow++;
            erow--;
            scol++;
            ecol--;

        }

        return ans;
    }
};