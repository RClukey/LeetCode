class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int maximum = INT_MIN;
        for (int i : nums)
        {
            for (int j : nums)
            {
                if (abs(i-j) <= min(i, j)) maximum = max(maximum, i^j);
            }
        }
        return maximum;
    }
};
