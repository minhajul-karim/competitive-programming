#include <iostream>

using namespace std;

// Declare the structure of a linked list
struct Node
{
    int value;
    Node* next;

    Node(int x) : value(x), next(NULL) {}

};

// Prototypes
Node* insert(Node *headNode, int number);
Node* addTwoNumbers(Node* l1, Node* l2);
void printList(Node* head);

int main()
{
    // Construct List 1
    Node* l1 = NULL;
    l1 = insert(l1, 9);

    // Construct List 2
    Node* l2 = NULL;
    l2 = insert(l2, 1);
    l2 = insert(l2, 9);

    Node* x = addTwoNumbers(l1, l2);
    printList(x);

    return 0;
}

Node* addTwoNumbers(Node* l1, Node* l2)
{
    Node* p = l1;
    Node* q = l2;

    // Create a new list
    int carry = 0, new_node_created = 0;
    Node* l3 = new Node(0);
    Node* current = l3;

    // Travarse both lists until both of them becomes NULL
    while (p != NULL || q != NULL)
    {
        int a = (p != NULL) ? p->value : 0;
        int b = (q != NULL) ? q->value : 0;
        int sum = a + b + carry;
        carry = sum/10;
        current->value = (sum%10);

        /* Create a new node if next of either
        p or q are not NULL */

        // If p is not NULL
        if (p)
        {
            if (p->next != NULL && new_node_created == 0)
            {
                current->next = new Node(0);
                current = current->next;
                new_node_created = 1;
            }
            p = p->next;
        }
        
        // If q is not NULL
        if (q)
        {
            if (q->next != NULL && new_node_created == 0)
            {
                current->next = new Node(0);
                current = current->next;
            }
            q = q->next;
        }

        new_node_created = 0;

    }

    if (carry > 0)
    {
        current->next = new Node(carry);
    }
    
    return l3;
}

Node* insert(Node *headNode, int number)
{

    Node* newNode = new Node(number);
    if (headNode == NULL)
    {
        headNode = newNode;
    }
    else
    {
        Node* temp = headNode;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    return headNode;

}

void printList(Node* headNode)
{
    Node* temp = headNode;
    while(temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}