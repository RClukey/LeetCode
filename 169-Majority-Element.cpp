class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int out = 0, maj = 0;

        for (int n : nums) {
            if (!maj) out = n;
            maj += (n == out) ? 1 : -1;
        }

        return out;
    }
};
