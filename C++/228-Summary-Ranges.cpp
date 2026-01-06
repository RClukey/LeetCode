class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> out;
        if (nums.empty()) return out;
        else if (nums.size() == 1)
        {
            out.push_back(to_string(nums[0]));
            return out;
        }
        
        int start = 0, i = 0;
        for ( ; i < nums.size()-1; i++)
        {
            if (nums[i] + 1 != nums[i+1])
            {
                if (start == i)
                {
                    out.push_back(to_string(nums[start]));
                    start++;
                }
                else
                {
                    out.push_back(to_string(nums[start]) + "->" + to_string(nums[i]));
                    start = i+1;
                }
            }
        }
        if (nums[i-1] + 1 == nums[i]) out.push_back(to_string(nums[start]) + "->" + to_string(nums[i]));
        else out.push_back(to_string(nums[start]));

        return out;
    }
};
