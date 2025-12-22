class Solution {
public:
    int myAtoi(string s) {
        int i = 0;

        while (i < s.size() && s[i] == ' ') i++;
        if (i == s.size()) return 0;

        bool pos = true;
        if (s[i] == '-')
        {
            pos = false;
            i++;
        }
        else if (s[i] == '+') i++;

        double out = 0;
        for ( ; i < s.size() && isdigit(s[i]); ++i) out = out*10 + (s[i] - '0');
        if (pos && out >= INT_MAX) return INT_MAX;
        if (!pos && -out <= INT_MIN) return INT_MIN;
        return (pos) ? static_cast<int>(out) : static_cast<int>(-out);
    }
};
