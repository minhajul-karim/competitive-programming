#include <iostream>

using namespace std;

struct Node
{
    int val;
    Node* left;
    Node* right;

    Node(int val)
    {
        this->val = val;
        this->left = this->right = nullptr;
    }
};

// Prototypes
bool isBalanced(Node* rootNode);
int height(Node* rootNode);

int main()
{

    // Build a tree around root
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(3);
    root->right->right = new Node(6);
    root->right->right->left = new Node(7);

    int res = isBalanced(root);
    res == 1 ? cout << "Balanced\n" : cout << "Unbalanced\n";

    return 0;
}

bool isBalanced(Node* rootNode)
{
    if (rootNode == nullptr)
    {
        return true;
    }

    return height(rootNode) != -999;
}

int height(Node* rootNode)
{
    if (rootNode == nullptr)
    {
        return 0;
    }

    // Calculate the height of left subtree
    int leftHeight = height(rootNode->left);
    if (leftHeight == -999)
    {
        return -999;
    }

    // Calculate the height of right subtree
    int rightHeight = height(rootNode->right);
    if (rightHeight == -999)
    {
        return -999;
    }

    // Check if the current root is balanced
    if (abs(leftHeight - rightHeight) > 1)
    {
        return -999;
    }

    // Return the height of the caller root
    return max(leftHeight, rightHeight) + 1;

}
