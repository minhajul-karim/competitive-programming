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
    vector<int> preorder(Node* root)
    {
        
        stack<Node*> myStack;
        vector<int> result;
        
        if (root == NULL)
        {
            return {};
        }
        
        // Push root to the stack
        myStack.push(root);
        
        // Iterate the stack
        while(!myStack.empty())
        {
            // Grab the top of the stack
            Node* currentNode = myStack.top();
            
            // Push currentNode into result vector
            result.push_back(currentNode->val);
            
            // Pop from the stack
            myStack.pop();
            
            // Size of children
            int childrenSize = currentNode->children.size();
            
            // Push children into stack in reverse
            for (int i = childrenSize - 1; i >= 0; i--)
            {
                myStack.push(currentNode->children[i]);
            }
            
        }
        
        return result;
    
    }

};
