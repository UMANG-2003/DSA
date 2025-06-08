-> Singly Linked List

A singly linked list is a fundamental data structure, it consists of nodes where each node contains a data field and a reference to the next node in the linked list. The next of the last node is null, indicating the end of the list. Linked Lists support efficient insertion and deletion operations.

// Definition of a Node in a singly linked list
struct Node {
  
    // Data part of the node
    int data;

    // Pointer to the next node in the list
    Node* next;

    // Constructor to initialize the node with data
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};


-> Traversal of Singly Linked List
Traversal in a linked list means visiting each node and performing operations like printing or processing data.

Step-by-step approach:

Initialize a pointer (current) to the head of the list.
Loop through the list using a while loop until current becomes NULL.
Process each node (e.g., print its data).
Move to the next node by updating current = current->next.