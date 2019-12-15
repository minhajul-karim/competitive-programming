/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
     
        if (root == NULL)
        {
            return {};
        }
        
        vector<int> result;
        helper(root, result);
        result.push_back(root->val);
        return result;
    }
    
    void helper(Node* rootNode, vector<int> &res)
    {
        
        // Travarse the children
        for (Node* child: rootNode->children)
        {
            helper(child, res);
            res.push_back(child->val);
        }
        
        return;
        
    }
};
