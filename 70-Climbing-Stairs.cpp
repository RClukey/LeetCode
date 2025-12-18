class Solution {
public:
    int climbStairs(int n) {
        int p = 1, c = 1;
        for (int i = 2; i <= n; i++)
        {
            c += p;
            p = c - p;
        }
        return c;
    }
};
