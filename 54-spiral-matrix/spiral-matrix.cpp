class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if (matrix.empty()) return ans;

        int top = 0, bottom = matrix.size() - 1;
        int left = 0, right = matrix[0].size() - 1;

        while (top <= bottom && left <= right) {
            for (int col = left; col <= right; col++)
                ans.push_back(matrix[top][col]);
            top++;

            for (int row = top; row <= bottom; row++)
                ans.push_back(matrix[row][right]);
            right--;

            if (top <= bottom) {
                for (int col = right; col >= left; col--)
                    ans.push_back(matrix[bottom][col]);
                bottom--;
            }

            if (left <= right) {
                for (int row = bottom; row >= top; row--)
                    ans.push_back(matrix[row][left]);
                left++;
            }
        }

        return ans;
    }
};
