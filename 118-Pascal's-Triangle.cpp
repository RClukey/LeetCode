class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> output;
        for (int i = 0; i < numRows; ++i)
        {
            vector<int> newRow(i+1, 1);
            for (int j = 1; j < i; ++j)
            {
                newRow[j] = output[i - 1][j - 1] + output[i - 1][j];
            }
            output.push_back(newRow);
        }
        return output;
    }
};
