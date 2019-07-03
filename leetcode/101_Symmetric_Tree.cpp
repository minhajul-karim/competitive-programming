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
    bool isSymmetric(TreeNode* root) {
        
        // Check if the rootNode is NULL
        if (root == NULL)
            return true;
        
        // Check left & right node of root if they're symmetric
        bool res = foo(root->left, root->right);
        return res;
        
    }
    
    bool foo(TreeNode* rootNode1, TreeNode* rootNode2)
    {
        // If both are NULL
        if (rootNode1 == NULL && rootNode2 == NULL)
            return true;
        
        // If either is NULL
        else if (rootNode1 == NULL || rootNode2 == NULL)
            return false;
        
        // If the values mismatch
        else if (rootNode1->val != rootNode2->val)
            return false;
        
        // Check the child nodes
        else return (foo(rootNode1->left, rootNode2->right) && foo(rootNode1->right, rootNode2->left));
    }
};
