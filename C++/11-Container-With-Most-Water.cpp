class Solution {
public:
    int maxArea(vector<int>& height) {
        int maximum = 0, i = 0, j = height.size()-1;
        while (i < j)
        {
            maximum = max(maximum, (j-i)*min(height[i], height[j]));

            if (height[i] < height[j]) i++;
            else j--;
        }
        return maximum;
    }
};
