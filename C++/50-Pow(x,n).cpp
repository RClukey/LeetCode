class Solution {
public:
    double myPow(double x, int n) {
        if (!n || x == 1) return 1.0;

        double out = 1.0;
        long long exponent = abs((long long)n);

        while (exponent > 0)
        {
            if (exponent % 2)
            {
                out *= x;
                exponent--;
            }
            else
            {
                x *= x;
                exponent /= 2;
            }
        }

        if (n < 0) return 1 / out;
        return out;
    }
};
