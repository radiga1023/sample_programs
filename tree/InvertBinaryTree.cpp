/*
https://leetcode.com/problems/invert-binary-tree
Invert a binary tree.

Example:

Input:

     4
   /   \
  2     7
 / \   / \
1   3 6   9
Output:

     4
   /   \
  7     2
 / \   / \
9   6 3   1
*/
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL) return NULL;
        TreeNode* right = invertTree(root->left);
        TreeNode* left = invertTree(root->right);
        root->left = right;
        root->right = left;
        return root;
    }
};
