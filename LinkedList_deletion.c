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
        printf("Element %d is : %d\n", i, ptr->data);
        ptr = ptr->next;
        i++;
    }
}

struct Node *delete_at_firts(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct Node *delete_in_between(struct Node *head, int index)
{
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    struct Node *q = p->next;
    p->next = q->next;
    free(q);
    return head;
}

struct Node *delete_last(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

struct Node *delete_at_node(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
    struct Node *sixth;
    struct Node *seventh;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));
    sixth = (struct Node *)malloc(sizeof(struct Node));
    seventh = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = fifth;

    fifth->data = 45;
    fifth->next = sixth;

    sixth->data = 67;
    sixth->next = seventh;

    seventh->data = 99;
    seventh->next = NULL;

    printf("previous linkedlist\n");
    display(head);

    printf("new-1 linkedlist\n");
    head = delete_at_firts(head);
    display(head);

    printf("new-2 linkedlist\n");
    head = delete_in_between(head, 1);
    display(head);

    printf("new-3 linkedlist\n");
    head = delete_at_node(head, 45);
    display(head);

    printf("new-4 linkedlist\n");
    head = delete_last(head);
    display(head);

    return 0;
}
