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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        
        if (t1 == NULL && t2 == NULL)
        {
            return NULL;
        }

        // Calculate the merged node
        int sum = (t1 == NULL ? 0 : t1->val) + (t2 == NULL ? 0 : t2->val);

        // Create the new Tree
        TreeNode* t3 = new TreeNode(sum);
        t3->left = mergeTrees(t1 == NULL ? NULL : t1->left, t2 == NULL ? NULL : t2->left);
        t3->right = mergeTrees(t1 == NULL ? NULL : t1->right, t2 == NULL ? NULL : t2->right);

        return t3;
        
    }
};
