class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || s.size() <= 1 || numRows >= s.size()) return s;
        
        int cycleLen = 2 * numRows - 2, n = s.size();
        string out;

        for (int row = 0; row < numRows; ++row)
        {
            int i = row;
            bool change = false;
            while (i < n)
            {
                out += s[i];
                if (row == 0 || row == numRows-1) i += cycleLen;
                else if (change) i += 2*row;
                else i += cycleLen - (2 * row);
                change = !change;
            }
        }
        
        return out;
    }
};
