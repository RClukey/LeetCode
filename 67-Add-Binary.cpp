class Solution {
public:
    string addBinary(string a, string b) {
        string out;
        int i = a.length() - 1, j = b.length() - 1, carry = 0;

        while (i >= 0 || j >= 0 || carry) {
            if (i >= 0) carry += a[i--] - '0';
            if (j >= 0) carry += b[j--] - '0';

            out += (carry%2) + '0';
            carry /= 2;
        }

        reverse(begin(out), end(out));
        return out; 
    }
};
