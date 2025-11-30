class Solution {
public:
    int reverse(int x) {
        int output = 0;
        while (x != 0) {
            int ones = x % 10;
            x /= 10;
            if ((output > INT_MAX / 10) || (output == INT_MAX / 10 && ones > 7))
                return 0;
            if ((output < INT_MIN / 10) || (output == INT_MIN / 10 && ones < -8))
                return 0;
            output = output * 10 + ones;
        }
        return output;
    }
};
