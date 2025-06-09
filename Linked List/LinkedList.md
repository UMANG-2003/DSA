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


-> Searching in Singly Linked List
Searching in a Singly Linked List refers to the process of looking for a specific element or value within the elements of the linked list.

Step-by-step approach:

Start from the head of the linked list.
Check each node’s data:
If it matches the target value, return true (element found).
Otherwise, move to the next node.
Repeat until the end (NULL) is reached.
If no match is found, return false.


-> Length of Singly Linked List
Finding the length of a Singly Linked List means counting the total number of nodes.

Step-by-step approach:

Initialize a counter (length = 0).
Start from the head, assign it to current.
Traverse the list:
Increment length for each node.
Move to the next node (current = current->next).
Return the final length when current becomes NULL.


-> Insertion in Singly Linked List
Insertion is a fundamental operation in linked lists that involves adding a new node to the list. There are several scenarios for insertion:

a. Insertion at the Beginning of Singly Linked List: Insertion at the beginning involves adding a new node before the current head, making it the new head.

Insertion-at-the-Beginning-of-Singly-Linked-List
Insert a Node at the Front/Beginning of Linked List
Step-by-step approach:

Create a new node with the given value.
Set the next pointer of the new node to the current head.
Move the head to point to the new node.
Return the new head of the linked list.
To read more about Insertion at the Beginning of linked list Refer, Insert a Node at Front/Beginning of a Linked List

b. Insertion at the End of Singly Linked List: To insert a node at the end of the list, traverse the list until the last node is reached, and then link the new node to the current last node

Insertion-at-the-End-of-Singly-Linked-List
Insertion at end of Linked List
Step-by-step approach:

Create a new node with the given value.
Check if the list is empty:
If it is, make the new node the head and return.
Traverse the list until the last node is reached.
Link the new node to the current last node by setting the last node's next pointer to the new node.
To read more about Insertion at the end of linked list Refer, Insert Node at the End of a Linked List

c. Insertion at a Specific Position of the Singly Linked List: To insert a node at a specific position, traverse the list to the desired position, link the new node to the next node, and update the links accordingly.

Insertion-at-a-Specific-Position-of-the-Singly-Linked-List-copy
Step-by-step approach:

Create a new node and assign it a value.
If inserting at the beginning (position = 1):
Point the new node’s next to the current head.
Update the head to the new node.
Return (Insertion done).
Otherwise, traverse the list:
Start from the head and move to the (position - 1)ᵗʰ node (just before the desired position).
If the position is beyond the list length, return an error or append at the end.
Insert the new node:
Point the new node’s next to the next node of the current position.
Update the previous node’s next to the new node.
Return the updated list.