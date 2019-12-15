/**
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
    int rangeSumBST(TreeNode* root, int L, int R) {
        
        if (root == nullptr)
        {
            return 0;
        }
        
        // Calculate sum of the left side
        int leftSum = rangeSumBST(root->left, L, R);
        
        // Calculate sum of the right side
        int rightSum = rangeSumBST(root->right, L, R);
        
        if (root->val >= L && root->val <= R)
        {
            return (leftSum + root->val + rightSum);
        }
        
        else
        {
            return (leftSum + rightSum);
        }
        
    }
};
