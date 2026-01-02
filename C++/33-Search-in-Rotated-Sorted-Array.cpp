class Solution { 
public:
    int search(vector<int>& nums, int target) {
        if (nums.empty()) return -1;
        if (nums[0] == target) return 0;
        if (nums[nums.size()-1] == target) return nums.size()-1;
        
        int left = 0, right = nums.size()-1;
        while (left <= right)
        {
            int m = left + (right-left)/2;
            if (nums[m] == target) return m;
            if (nums[left] == target) return left;
            if (nums[right] == target) return right;

            if (nums[m] > nums[left])
            {
                if (target > nums[left] && target < nums[m]) right = m-1;
                else left = m+1;
            }
            else
            {
                if (target > nums[m] && target < nums[right]) left = m+1;
                else right = m-1;
            }
        }

        return -1;
    }
};
