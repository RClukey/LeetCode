class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count = 0, left = 0, right = 0, total = 0;
        for (int i = 0; i < nums.size(); i++) total += nums[i];

        for (int i = 0; i+1 < nums.size(); ++i)
        {
            left += nums[i];
            right = total-left;
            if ((left - right) % 2 == 0) count++;
        }
        return count;
    }
};
