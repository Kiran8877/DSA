class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int col=matrix[0].size();
        vector<int> r;
        vector<int> c;
        for(int i=0;i<rows;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    r.push_back(i);
                    c.push_back(j);
                }
            }
        }
        for (int x : r) {
            for (int j = 0; j < col; j++) {
                matrix[x][j] = 0;
            }
        }

    
        for (int x : c) {
            for (int i = 0; i < rows; i++) {
                matrix[i][x] = 0;
            }
        }
        for(int i=0;i<rows;i++){
            for(int j=0;j<col;j++){
                cout<<matrix[i][j];
            }
        }
    }

};