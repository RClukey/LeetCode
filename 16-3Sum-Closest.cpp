class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int out = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < nums.size()-2; ++i) {
            if (i > 0 && nums[i] == nums[i-1]) continue;
            int j = i+1, k = nums.size()-1;

            while (j < k) {
                int total = nums[i] + nums[j] + nums[k];
                if (total == target) return target;

                if (abs(target - total) < abs(target - out)) out = total;
                
                if (total < target) j++;
                else k--;
            }
        }

        return out;
    }
};
