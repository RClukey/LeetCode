class Solution {
public:
    int mirrorDistance(int n) {
        int out = 0, temp = n;
        while (temp > 0)
        {
            out *= 10;
            out += (temp%10);
            temp /= 10;
        }
        return abs(n-out);
    }
};
