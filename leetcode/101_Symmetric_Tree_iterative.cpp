/* Idea adopted from https://leetcode.com/articles/symmetric-tree/ */

#include <iostream>
#include <cstdio>
#include <queue>
#include <cstdbool>

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

bool isSym(Node* rootNode);

int main()
{
    queue<Node*> q;

    Node* root = new Node(8);
    root->left = new Node(2);
    root->right = new Node(1);

    bool x = isSym(root);
    (x == 1) ? cout << "True" << endl : cout << "False" << endl;

    return 0;
}

bool isSym(Node* rootNode)
{
    // If root is nullptr
    if (rootNode == nullptr)
        return true;
    
    // Declare a queue
    queue<Node*> q;

    // Insert left and right children of rootNode into the queue from front
    q.push(rootNode->left);
    q.push(rootNode->right);

    // While the queue is not empty
    while(!q.empty())
    {
        // Keep the 1st value of queue
        Node* temp1 = q.front();
        // Pop 1st value from front
        q.pop();

        // Keep the 2nd value of queue
        Node* temp2 = q.front();
        // Pop 2nd value from front
        q.pop();

        // If both of the temp are nullptr
        if (temp1 == nullptr && temp2 == nullptr)
            continue;
        
        // If either of the temp are nullptr
        else if (temp1 == nullptr || temp2 == nullptr)
            return false;

        // If the values of 2 temp vars are not same
        else if (temp1->val != temp2->val)
            return false;
        
        // Both temps are same, add their children into the queue
        q.push(temp1->left);
        q.push(temp2->right);
        q.push(temp1->right);
        q.push(temp2->left);
    }
    
    return true;
}