#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void display(struct Node *ptr)
{
    int i = 0;
    while (ptr != NULL)
    {
        printf("Element %d is : %d\n\n", i, ptr->data);
        ptr = ptr->next;
        i++;
    }
}

struct Node *Insertion_at_first(struct Node *head, int value)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = value;
    head = ptr;
    return head;
}

struct Node *Insertion_at_End(struct Node *head, int value)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    ptr->data = value;
    return head;
}

struct Node *Insertion_After_Node(struct Node *head, struct Node *prevNode, int value)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    ptr->next = prevNode->next;
    ptr->data = value;
    prevNode->next = ptr;
    return head;
}

struct Node *Insertion_in_between(struct Node *head, int value, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    ptr->data = value;
    p->next = ptr;
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = NULL;
    
    int n;
    printf("Enter your choice : ");
    scanf("%d",&n);

    switch(n)
    {

    case 1: display(head);
            break;

    case 2: head = Insertion_at_first(head, 50);
            display(head);
            break;

    case 3: head = Insertion_at_End(head, 90);
            display(head);
            break;

    case 4: head = Insertion_After_Node(head,second,100);
            display(head);
            break;

    case 5: head = Insertion_in_between(head, 60, 2);
            display(head);
            break;
    case 6: exit(1);        

    default : printf("invalid choice");       

   }

    return 0;
}
