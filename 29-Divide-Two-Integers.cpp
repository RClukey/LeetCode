class Solution {
public:
    int divide(int dividend, int divisor) {
        if (!dividend) return 0;
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;
        if (divisor == 1) return dividend;
        if (divisor == -1) return -dividend;

        const bool neg = (dividend < 0)^(divisor < 0);

        long long absEnd = llabs((long long) dividend);
        long long absSor = llabs((long long) divisor);
        
        long long out = 0;
        
        while (absEnd >= absSor)
        {
            long long temp = absSor, multiple = 1;

            while (absEnd >= (temp << 1))
            {
                temp <<= 1;
                multiple <<= 1;
            }

            absEnd -= temp;
            out += multiple;
        }
        
        return (neg) ? (-out) : (out);
    }
};
