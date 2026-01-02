class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> output;

        for (auto& n : nums) if (n != val) output.push_back(n);

        nums = output;
        return output.size();
    }
};
