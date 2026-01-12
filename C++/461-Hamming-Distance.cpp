class Solution {
public:
    int hammingDistance(int x, int y) {
        int out = 0, n = x ^ y;
        while (n)
        {
            if (n % 2) out++;
            n >>= 1;
        }
        return out;
    }
};
