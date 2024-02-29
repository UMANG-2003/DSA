#include<stdio.h>
#define MAXSIZE 10

int s[10],top=-1;

int isfull()
{
    if(top==MAXSIZE-1)
    return 1;
    else
    return 0;
}

int isempty()
{
    if(top==-1)
    return 1;
    else
    return 0;
}

void PUSH()
{
    int item;
    if(!isfull())
    {
    printf("enter the element to insert : ");
    scanf("%d",&item);
    top=top+1;
    s[top]=item;
    }
    else
    {
        printf("over flow");
    }

}

void POP()
{
    if(!isempty())
    {
        top--;
    }
    else
    {
        printf("under flow");
    }
}

void DISPLAY()
{
    for(int i=0;i<=top;i++)
    {
        printf("%d\n",s[i]);

    }
}

int main()
{
    while(1)
    {
        printf("1.)PUSH\n");
        printf("2.)POP\n");
        printf("3.)DISPLAY\n");
        printf("4.)EXIT\n");

        int ch;
        printf("entre your choce\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1: PUSH();
                break;
        case 2: POP();
                break;
        case 3: DISPLAY();
                break;
        case 4: return 0;
        
        default:printf("I.C");

        }

    }
    return 0;
}