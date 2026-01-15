class Solution {
public:
    string toHex(int num) {
        if (!num) return "0";
        string output;
        unsigned int newNum = num;

        while (newNum)
        {
            int temp = newNum % 16;
            if (temp >= 10) output += (temp - 10) + 'a';
            else output += temp + '0';
            newNum /= 16;
        }
        reverse(output.begin(), output.end());
        return output;
    }
};
