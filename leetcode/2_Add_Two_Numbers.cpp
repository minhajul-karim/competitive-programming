#include <iostream>

using namespace std;

// Declare the structure of a linked list
struct Node
{
    int value;
    Node* next;

    Node(int data)
    {
        this->value = data;
        this->next = NULL;
    }

};

Node* insert(Node *headNode, int number);
Node* addTwoNumbers(Node* l1, Node* l2);
void printList(Node* head);

int main()
{
    // Construct List 1
    Node* l1 = NULL;
    l1 = insert(l1, 9);
    l1 = insert(l1, 8);

    // Construct List 2
    Node* l2 = NULL;
    l2 = insert(l2, 1);

    Node* x = addTwoNumbers(l1, l2);
    printList(x);

    return 0;
}

Node* addTwoNumbers(Node* l1, Node* l2)
{
    // Declare 2 temp vars
    Node* temp1 = l1;
    Node* temp2 = l2;

    // A new list to be returned
    Node* l3 = NULL;

    // Declare sum and carry
    int sum = 0, carry = 0;

    // Keep adding until the end of l1 or l2
    while(temp1 && temp2)
    {
        sum = temp1->value + temp2->value + carry;
        
        // Reset carry
        carry = 0;
        
        // Deal with carry
        if (sum > 9)
        {
            sum = sum % 10;
            carry = 1;
        }

        // Create a new node
        l3 = insert(l3, sum);

        // Move ahead with temp1, temp2
        temp1 = temp1->next;
        temp2 = temp2->next;

        // Reset sum
        sum = 0;
        
    }

    // If temp1 not null & temp2 is null
    if (temp1 && (!temp2))
    {
        sum = temp1->value + carry;
        carry = 0;

        if (sum > 9)
        {
            sum = sum % 10;
            carry = 1;
        }

        l3 = insert(l3, sum);
        temp1 = temp1->next;
        
        while(temp1)
        {
            sum = temp1->value + carry;
            carry = 0;
            if (sum > 9)
            {
                sum = sum % 10;
                carry = 1;
            }
            l3 = insert(l3, sum);
            temp1 = temp1->next;
        }

        if (carry > 0)
        {
            l3 = insert(l3, carry);
        }
    }
    
    // If temp2 not null & temp1 is null
    else if (temp2 && (!temp1))
    {
        sum = temp2->value + carry;
        carry = 0;
        if (sum > 9)
        {
            sum = sum % 10;
            carry = 1;
        }

        l3 = insert(l3, sum);
        temp2 = temp2->next;
        
        while(temp2)
        {
            sum = temp2->value + carry;
            carry = 0;
            if (sum > 9)
            {
                sum = sum % 10;
                carry = 1;
            }
            l3 = insert(l3, sum);
            temp2 = temp2->next;
        }

        if (carry > 0)
        {
            l3 = insert(l3, carry);
        }
    }

    // If carry reamins
    else if (carry > 0)
    {
        l3 = insert(l3, carry);
    }

    return l3;
    
}

Node* insert(Node *headNode, int number)
{

    Node* newNode = new Node(number);
    // cout << newNode->value << endl;
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