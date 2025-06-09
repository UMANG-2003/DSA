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

bool searchKey(Node *head, int key)
{
    while (head != NULL)
    {
        if (head->data == key)
        {
            return true;
        }
        head = head->next;
    }
    return false;
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

    int key;
    cout << "Enter the key to search : ";
    cin >> key;

    if (searchKey(head, key))
        cout << "Yes";
    else
        cout << "No";
}

//O(N) Time and O(N) Space