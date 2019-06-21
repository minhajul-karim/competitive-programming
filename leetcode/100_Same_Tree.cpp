/**
 * Idea adopted from https://leetcode.com/articles/same-tree/
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        // Check if both are NULL
        if (p == NULL && q == NULL)
            return true;
        
        // Check if either is NULL
        else if (p == NULL || q == NULL)
            return false;
        
        // Match the values current nodes
        else if (p->val != q->val)
            return false;
        
        // Check the child nodes
        else 
            return (isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
        
    }
};
