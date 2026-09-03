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
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> tree;
        if (root == nullptr) return tree;
        tree = postorderTraversal(root->left);
        vector<int> right = postorderTraversal(root->right);
        tree.insert(tree.end(), right.begin(), right.end());
        tree.push_back(root->val);
        return tree;
    }
};