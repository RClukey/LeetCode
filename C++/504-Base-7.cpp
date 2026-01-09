class Solution {
public:
    string convertToBase7(int num) {
        if (!num) return "0";
        bool neg = (num < 0);
        string out = "";
        num = abs(num);

        while (num)
        {
            out = to_string(num % 7) + out;
            num /= 7;
        }
        return (neg) ? "-" + out : out;
    }
};
