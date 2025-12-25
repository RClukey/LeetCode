class Solution {
private:
    vector<string> out;

    void helper(int n, int open, int close, string str)
    {
        if (close == n) out.push_back(str);
        if (open < n) helper(n, open+1, close, str+"(");
        if (close < open) helper(n, open, close+1, str+")");
    }

public:
    vector<string> generateParenthesis(int n) {
        if (!n) return out;
        helper(n, 1, 0, "(");
        return out;
    }
};
