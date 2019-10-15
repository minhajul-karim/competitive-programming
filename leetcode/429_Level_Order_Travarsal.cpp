#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct Node
{
    int val;
    Node* children[3];

    Node(int num)
    {
        this->val = num;
        for (int i = 0; i < 3; i++)
            this->children[i] = nullptr;
    }
};

// Prototypes
vector<vector<int>> levelOrder(Node* root);

typedef vector<int> oned;
typedef vector<oned> twod;

int main()
{
    int i, j, k = 0;

    Node* root = new Node(10);
    root->children[0] = new Node(4);
    root->children[1] = new Node(5);
    root->children[2] = new Node(6);

    twod final = levelOrder(root);

    // Print
    for (i = 0; i < final.size(); i++)
    {
        for (j = 0; j < final[i].size(); j++)
            cout << final[i][j] << " ";
        cout << "\n";
    }

    delete root;

    return 0;
}

vector<vector<int>> levelOrder(Node* root)
{
    // If root is nullptr
    if (root == nullptr)
        return {};
    
    // Declare a two dimensional vector
    vector<vector<int>> result;

    // Declare a Queue
    queue<Node*> q;

    // Enqueue root to q
    q.push(root);

    // Travarse until the q is not empty
    while(!q.empty())
    {
        // Declare a vector
        vector<int> currentLevel;

        // Nodes at this level
        size_t size = q.size();

        for (int i = 0; i < size; i++)
        {
            // Get the front of the q
            Node* temp = q.front();

            // Dequeue
            q.pop();

            currentLevel.push_back(temp->val);

            // Push children to q
            for (int j = 0; j < 3; j++)
            {
                if (temp->children[j] != nullptr)
                    q.push(temp->children[j]);
            }
            // for (auto n : temp->children)
            //     q.push(n);
        }

        // Push one dimensional vector currentLevel into two dimensional result
        result.push_back(currentLevel);

    }

    return result;
}