class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if (k == 1) return 1;
        if (k % 2 == 0 || k % 5 == 0) return -1;

        int n = 1, count = 1;
        
        while (n)
        {
            n = ((n * 10) + 1) % k;
            ++count;
        }

        return count;
    }
};
