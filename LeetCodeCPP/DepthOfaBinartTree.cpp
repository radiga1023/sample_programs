
/*
https://leetcode.com/problems/maximum-depth-of-binary-tree/

Given a binary tree, find its maximum depth.

The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

Note: A leaf is a node with no children.

Example:

Given binary tree [3,9,20,null,null,15,7],

    3
   / \
  9  20
    /  \
   15   7
return its depth = 3.

*/

class Solution {
public:
    int maxDepth(TreeNode* root) {
        int leftHight = 0;
        int rightHight = 0;
        if (root == NULL) 
            return 0;
        else
        {
            leftHight = maxDepth(root->left);
            rightHight = maxDepth(root->right);
            if (leftHight > rightHight)
                return leftHight+1;
            else
                return rightHight+1;
        }
        
    }
};
