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
    int count = 0;
    void helper(TreeNode* node, bool left)
    {
        if (!node) return;
        if (!node->left && !node->right && left) count += node->val;
        else
        {
            helper(node->left, 1);
            helper(node->right, 0);
        } 
    }

public:
    int sumOfLeftLeaves(TreeNode* root) {
        if (!root) return 0;
        helper(root->left, 1);
        helper(root->right, 0);
        return count;
    }
};
