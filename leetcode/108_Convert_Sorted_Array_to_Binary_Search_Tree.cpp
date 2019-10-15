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
    TreeNode* sortedArrayToBST(vector<int>& nums)
    {
        
        // Check if nums is empty
        if (nums.empty()) {
            return NULL;
        }
        
        // Send nums to helper function
        TreeNode* root = helper(nums, 0, nums.size()-1);
        return root;
        
    }
    
    // Helper function
    TreeNode* helper(vector<int>& nums, int low, int high)
    {
        // Base case
        if (low > high)
        {
            return NULL;
        }
        
        // Find the middle point
        int mid = low + (high - low)/2;
        
        // Create a new node
        TreeNode* node = new TreeNode(nums[mid]);
        node->left = helper(nums, low, mid-1);
        node->right = helper(nums, mid+1, high);
        return node;
    }
};
