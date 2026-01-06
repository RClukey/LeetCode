class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n == 1) return true;

        while (n)
        {
            if (!(n % 4)) n /= 4;
            else return n == 1;
        }
        return false;
    }
};
