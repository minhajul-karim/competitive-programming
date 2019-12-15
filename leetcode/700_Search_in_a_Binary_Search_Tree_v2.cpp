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
    TreeNode* searchBST(TreeNode* rootNode, int val) {
        
        if (rootNode == NULL)
        {
            return NULL;
        }

        // If val matches the value of current root node
        else if (rootNode->val == val)
        {
            return rootNode;
        }

        // Seek root in left or right subtree based on the value of val 
        TreeNode* temp = (val < rootNode->val) ? searchBST(rootNode->left, val) : searchBST(rootNode->right, val);

        return (temp != NULL) ? temp : NULL;
    }
};