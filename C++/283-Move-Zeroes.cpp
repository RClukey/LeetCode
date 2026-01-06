class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;

        for (int right = 0; right < nums.size(); right++)
        {
            if (nums[right])
            {
                swap(nums[right], nums[left]);
                left++;
            }
        } 
    }
};
