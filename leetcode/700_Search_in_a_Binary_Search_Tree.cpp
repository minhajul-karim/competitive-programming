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

        TreeNode* leftSubTree = searchBST(rootNode->left, val);
        TreeNode* rightSubTree = searchBST(rootNode->right, val);

        if (leftSubTree != NULL)
        {
            return leftSubTree;
        }

        if (rightSubTree != NULL)
        {
            return rightSubTree;
        }

        return NULL;
        
    }
};
