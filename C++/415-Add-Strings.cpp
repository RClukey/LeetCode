class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size()-1, j = num2.size()-1, carry = 0;
        string result = "";

        while (i >= 0 || j >= 0 || carry != 0) {
            int d1 = (i >= 0) ? num1[i] - '0' : 0;
            int d2 = (j >= 0) ? num2[j] - '0' : 0;
            carry += d1 + d2;
            result += ((carry % 10)+'0');
            carry /= 10;
            i--;
            j--;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
