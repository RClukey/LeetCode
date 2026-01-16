class Solution {
public:
    int thirdMax(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];   
        if (nums.size() == 2) return max(nums[0],nums[1]);

        int firstMax = *max_element(nums.begin(),nums.end());   
	    int secondMax = INT_MIN;
        int thirdMax = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == firstMax) continue;
            if (secondMax < nums[i]) secondMax = nums[i];
        }

        if (secondMax == INT_MIN) return firstMax; 
        
        int numThird = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == firstMax || nums[i] == secondMax) continue;
            if (thirdMax <= nums[i])
            {
                thirdMax = nums[i];
                numThird++;
            }
        }
        
        return (numThird) ? thirdMax : firstMax;
    }
};
