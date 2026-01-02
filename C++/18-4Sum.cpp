class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> out;
        if (nums.size() < 4) return out;
        sort(nums.begin(), nums.end());

        for (int h = 0; h < nums.size()-3; ++h)
        {
            if (h > 0 && nums[h] == nums[h-1]) continue;
            
            int i = h+1;
            for ( ; i < nums.size()-2; i++)
            {
                int j = i+1, k = nums.size()-1;
                long long remain = target - (long long)nums[h] - (long long)nums[i];

                while (j < k)
                {
                    if ((long long)nums[j] + (long long)nums[k] > remain) k--;
                    else if ((long long)nums[j] + (long long)nums[k] < remain) j++;
                    else
                    {
                        vector<int> res = {nums[h], nums[i], nums[j], nums[k]};
                        auto itr = find(out.begin(), out.end(), res);
                        if (itr == out.end()) out.push_back(res);
                        j++;
                        k--;
                        while (nums[j] == nums[j-1] && j < k) j++;
                    }
                }
            }
        }
        return out;
    }
};
