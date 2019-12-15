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

class Solution
{
public:
    vector<int> postorder(Node* root)
    {
     
        if (root == nullptr)
        {
            return {};
        }
        
        // Declare a vector & a stack
        vector<int> result;
        stack<Node*> myStack;
        
        myStack.push(root);
        
        while(!myStack.empty())
        {
            Node* currentNode = myStack.top();
            result.push_back(currentNode->val);
            myStack.pop();
            
            // Push children into stack
            for(Node* child : currentNode->children)
            {
                myStack.push(child);
            }
        }
        
        // Reverse the result
        reverse(result.begin(), result.end());
        return result;
    }
};
