class Solution {
public:
    string convertToTitle(int columnNumber) {
        string out = "";

        while (columnNumber > 0)
        {
            columnNumber--;
            out = (char)(((columnNumber % 26)) + 'A') + out;
            columnNumber /= 26;
        }
        return out;
    }
};
