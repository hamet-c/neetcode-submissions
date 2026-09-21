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
    pair<bool, int> depth(TreeNode* curr) {
        if (curr == nullptr) {
            return {true, 0};
        }
        pair<bool, int> left = depth(curr->left);
        pair<bool, int> right = depth(curr->right);
        bool res = (abs(left.second - right.second) <= 1) && left.first && right.first;

        return {res, 1 + max(left.second, right.second)};

    }
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }
        return depth(root).first;
    }
};