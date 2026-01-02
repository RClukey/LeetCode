class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        int minLen = strs[0].length();
        for (string str : strs)
        {
            if (str.length() < minLen) minLen = str.length();
        }

        string output = "";
        int common = 0;
        for (int i = 0; i < minLen; ++i)
        {
            common = 0;
            for (int j = 0; j < strs.size(); ++j)
            {
                if (strs[0][i] == strs[j][i]) common++;
            }
            if (common == strs.size()) output += strs[0][i];
            else break;
        }
        return output;
    }
};
