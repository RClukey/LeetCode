/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    TreeNode* helper(vector<int>&nums, int i, int j)
    {
        if (i > j) return NULL;
        int m = i + (j-i)/2;
        TreeNode* ptr = new TreeNode(nums[m], helper(nums, i, m-1), helper(nums, m+1, j));
        return ptr;
    }

public:
    TreeNode* sortedArrayToBST(vector<int>& nums)
    {
        return helper(nums, 0, nums.size() - 1);
    }
};
