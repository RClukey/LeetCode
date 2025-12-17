class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty()) return 0;
        int out = 0, i = 0;
        vector<int> lastIndex(128, -1); 

        for (int j = 0; j < s.size(); j++) {
            i = max(i, lastIndex[s[j]] + 1);
            out = max(out, j-i+1);
            lastIndex[s[j]] = j;
        }
        return out;
    }
};
