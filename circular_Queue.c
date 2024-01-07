#include <stdio.h>
#define MAX_SIZE 10
void enqueue();
void dequeue();
void display();
int isempty();
int isfull();
void exit();

int q[MAX_SIZE];
int front = -1, rear = -1;

int isfull()
{
    if ((front == rear + 1) || (front == 0 && rear == MAX_SIZE - 1))
    {
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
    printf("Enter the element : \n");
    scanf("%d", &item);

    if (isfull())
    {
        printf("queue is full\n");
    }
    else
    {
        rear = (rear + 1) % MAX_SIZE;
        q[rear] = item;
        if (front == -1)
        {
            front = 0;
        }
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
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % MAX_SIZE;
        }
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
        int i;
        for (i = front; (i + 1) % MAX_SIZE != (rear + 1) % MAX_SIZE; i = (i + 1) % MAX_SIZE)
        {
            printf("Element is %d\n", q[i]);
        }
        printf("Element  is %d\n", q[i]);
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