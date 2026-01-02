class Solution {
public:
    bool isValid(string s) {
        stack<char> chars;

        for (char ch : s)
        {
            if ((ch == '(') || (ch == '[') || (ch == '{')) chars.push(ch);
            else
            {
                if (chars.empty()) return false;
                if (((ch == ')') && (chars.top() == '(')) ||
                    ((ch == '}') && (chars.top() == '{')) ||
                    ((ch == ']') && (chars.top() == '[')))  chars.pop();
                else return false;
            }
        }
        return chars.empty();
    }
};
