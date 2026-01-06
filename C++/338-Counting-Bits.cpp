class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> out(n + 1, 0);
        int count = 1;

        for (int i = 1; i <= n; i++) {
            if (count * 2 == i) {
                count = i;
            }

            out[i] = out[i - count] + 1;
        }

        return out; 
    }
};
