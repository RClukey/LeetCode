class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        int top = 0;
        int bot = n-1;

        while (top < bot) {
            for (int col = 0; col < n; col++) {
                matrix[top][col] = matrix[top][col] + matrix[bot][col];
                matrix[bot][col] = matrix[top][col] - matrix[bot][col];
                matrix[top][col] = matrix[top][col] - matrix[bot][col];
            }
            top++; bot--;
        }

        for (int row = 0; row < n; row++) {
            for (int col = row + 1; col < n; col++) {
                matrix[row][col] = matrix[row][col] + matrix[col][row];
                matrix[col][row] = matrix[row][col] - matrix[col][row];
                matrix[row][col] = matrix[row][col] - matrix[col][row];
            }
        } 
    }
};
