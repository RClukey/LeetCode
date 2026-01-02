class Solution {
public:
    int titleToNumber(string columnTitle) {
        int out = 0;
        for (char c : columnTitle) out = (out*26) + (c-'@');
        return out;
    }
};
