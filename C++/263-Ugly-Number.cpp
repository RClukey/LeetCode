class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) return false;

        while (n)
        {
            if (!(n % 2)) n /= 2;
            else if (!(n % 3)) n /= 3;
            else if (!(n % 5)) n /= 5;
            else return (n == 1);
        }
        return true;
    }
};
