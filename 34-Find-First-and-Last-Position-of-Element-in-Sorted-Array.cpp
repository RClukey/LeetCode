class Solution {
private:
    int binary(vector<int> nums, int target, bool left)
    {
        int out = -1, m = 0, i = 0, j = nums.size()-1;
        while (i <= j)
        {
            m = i + (j-i)/2;
            if (nums[m] > target) j = m-1;
            else if (nums[m] < target) i = m+1;
            else
            {
                out = m;
                if (left) j = m-1;
                else i = m + 1;
            }
        }
        return out;
    }

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.empty()) return {-1,-1};
        int first = binary(nums, target, true);
        if (first == -1) return {-1,-1};
        return {first, binary(nums, target, false)};
    }
};
