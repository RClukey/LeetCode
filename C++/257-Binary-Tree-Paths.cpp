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
    vector<string> out;
    void helper(TreeNode* root, string path)
    {
        path += to_string(root->val);
        if (root->left) helper(root->left, path + "->");
        if (root->right) helper(root->right, path + "->");
        if (!root->left && !root->right) out.push_back(path);
    }

public:
    vector<string> binaryTreePaths(TreeNode* root) {
        if (root) helper(root, "");
        return out;
    }
};
