class Solution {
private:
    const unordered_map<char, string> letters = {
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"},
    };

    void helper(const string digits, int i, string word, vector<string>& out)
    {
        if (i == digits.length()) out.push_back(word);
        else for (char c : letters.at(digits[i])) helper(digits, i+1, word+c, out);
    }

public:
    vector<string> letterCombinations(string digits) {
        vector<string> out;
        if (digits.empty()) return out;

        helper(digits, 0, "", out);
        return out;
    }
};
