class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if (nums.size() == 1) return false;
        unordered_set<int> st({nums[0]});
        for (int i = 1; i < nums.size(); i++)
        {
            if (i > k) st.erase(nums[i - k - 1]);
            if (!st.insert(nums[i]).second) return true;
        }
        return false;
    }
};
