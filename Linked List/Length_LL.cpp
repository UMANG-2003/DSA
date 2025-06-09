#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int new_data)
    {
        this->data = new_data;
        this->next = nullptr;
    }
};

int Length(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

int main()
{
    int n, val;
    cout << "Enter number of nodes: ";
    cin >> n;

    Node *head = nullptr;
    Node *tail = nullptr;

    for (int i = 0; i < n; ++i)
    {
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> val;
        Node *newNode = new Node(val);
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    cout << "Count of nodes is " << Length(head);
    return 0;
}

// Time complexity: O(n), Where n is the size of the linked list
// Auxiliary Space: O(1), As constant extra space is used.