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
    void inorderTraversalHelper(TreeNode* root, vector<int>& output) {
        if (!root) return;
        inorderTraversalHelper(root->left, output);
        output.push_back(root->val);
        inorderTraversalHelper(root->right, output);
    }

public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> output;
        inorderTraversalHelper(root, output);
        return output;
    }
};
