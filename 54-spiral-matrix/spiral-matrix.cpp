class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         vector<int> result;
        if (matrix.empty()) return result;
        
        int top = 0, bottom = matrix.size() - 1;
        int left = 0, right = matrix[0].size() - 1;
        
        while (top <= bottom && left <= right) {
            // left → right
            for (int i = left; i <= right; i++)
                result.push_back(matrix[top][i]);
            top++;
            
            // top → bottom
            for (int i = top; i <= bottom; i++)
                result.push_back(matrix[i][right]);
            right--;
            
            // right → left
            if (top <= bottom) {
                for (int i = right; i >= left; i--)
                    result.push_back(matrix[bottom][i]);
                bottom--;
            }
            
            // bottom → top
            if (left <= right) {
                for (int i = bottom; i >= top; i--)
                    result.push_back(matrix[i][left]);
                left++;
            }
        }
        
        return result;
    
    }
};