class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int total = 0;
        vector<bool> output;

        for (int i : nums)
        {
            total = (total*2 + i) % 5;
            output.push_back(total == 0);
        }
        return output;
    }
};
