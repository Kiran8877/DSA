class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows = matrix[0].size();
        int cols = matrix.size();

        vector<vector<int>> mat(rows, vector<int>(cols));
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                int temp=matrix[i][j];
                mat[j][i] = temp;
            }
        }
        return mat;
    }
};