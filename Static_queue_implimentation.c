#include <stdio.h>
#define MAX_SIZE 10
void enqueue();
void dequeue();
void display();
int isempty();
int isfull();
void exit();

int q[MAX_SIZE];
int rear = -1;
int front = -1;

int isfull()
{
    if (rear == MAX_SIZE - 1)
    {
        printf("queue is full\n");
        return 1;
    }
    else
    {
        return 0;
    }
}

int isempty()
{
    if (front == -1)
    {
        printf("queue is empty\n");
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue()
{
    int item;
    printf("enter the item : ");
    scanf("%d", &item);

    if (isfull())
    {
        printf("queue is full\n");
    }
    else
    {
        if (front == -1)
            front = 0;
        rear = rear + 1;
        q[rear] = item;
    }
}

void dequeue()
{
    if (isempty())
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("element deleted is %d\n", q[front]);
        front = front + 1;
    }
}

void display()
{
    if (isempty())
    {
        printf("queue is empty\n");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("elements is : %d\n", q[i]);
        }
    }
}

int main()
{
    int ch;
    while (1)
    {
        printf("1.Enqueue Operation\n");
        printf("2.Dequeue Operation\n");
        printf("3.isempty Operation\n");
        printf("4.isfull Operation\n");
        printf("5.Display the Queue\n");
        printf("6.Exit\n");
        printf("Enter your choice of operations : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            printf("Queue is empty: %s\n", isempty() ? "true" : "false");
            break;
        case 4:
            printf("Queue is full: %s\n", isfull() ? "true" : "false");
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0);
        default:
            printf("Incorrect choice \n");
        }
    }

    return 0;
}
