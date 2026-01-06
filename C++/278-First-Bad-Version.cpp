// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if (n == 1) return n;
        else if (!isBadVersion(n-1)) return n;

        int i = 1, j = n;
        while (i <= j)
        {
            int m = i + (j-i)/2;
            if (!isBadVersion(m)) i = m+1;
            else
            {
                if (!isBadVersion(m-1)) return m;
                j = m-1;
            }
        }
        return i;
    }
};
