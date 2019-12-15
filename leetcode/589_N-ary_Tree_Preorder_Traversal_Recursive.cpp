/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        
        // Declare a vector to be returned
        vector<int> result;
        helper(result, root);
        return result;
        
    }
    
    void helper(vector<int> &result, Node* root)
    {
        if (root == NULL)
        {
            return;
        }
        
        else
        {
            result.push_back(root->val);
        }
        
        // Travarse the children of the current root
        for (Node* child : root->children)
        {
            helper(result, child);
        }
        
        return;
    }

};
