class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        if (strs.size() <= 1) return 0;

        int n = strs.size();

        vector<bool> ordered(n-1, false);
        int unordered = n-1, count = 0;

        for (int i = 0; i < strs[0].size() && unordered > 0; ++i)
        {
            bool del = false;

            for (int j = 0; j < n-1; ++j)
            {
                if (!ordered[j] && strs[j][i] > strs[j+1][i])
                {
                    del = true;
                    break;
                }
            }

            if (del)
            {
                count++;
                continue;
            }

            for (int j = 0; j < n-1; ++j)
            {
                if (!ordered[j] && strs[j][i] < strs[j+1][i])
                {
                    ordered[j] = true;
                    unordered--;
                }
            }
        }

        return count;
    }
};
