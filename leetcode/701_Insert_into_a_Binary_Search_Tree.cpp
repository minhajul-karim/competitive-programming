/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution
{
public:
    TreeNode* insertIntoBST(TreeNode* root, int val)
    {

        if (root == NULL)
        {
            return NULL;
        }

        TreeNode* currentTreeNode = root;

        // Travarse the tree
        while(1)
        {
            if (val > currentTreeNode->val)
            {
                if (currentTreeNode->right == NULL)
                {
                    // Create a new TreeNode here
                    currentTreeNode->right = new TreeNode(val);
                    break;
                }

                currentTreeNode = currentTreeNode->right;
            }
            else
            {
                if (currentTreeNode->left == NULL)
                {
                    // Create a new TreeNode here
                    currentTreeNode->left = new TreeNode(val);
                    break;
                }

                currentTreeNode = currentTreeNode->left;
            }
        }

        return root;

    }
};
