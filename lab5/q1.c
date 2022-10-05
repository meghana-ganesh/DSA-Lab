#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    char *c;
    int tos;

}Stack;
int isEmpty(Stack *ps1)
{
    if(ps1->tos == -1)
    {
        return 1;
    }
    else
        return 0;
}

int isFull(Stack *ps1,int n)
{
    if(ps1->tos == n-1)
    {
        return 1;
    }
    else
        return 0;
}

void push(char ele,Stack *ps1,int n)
{
    if(isFull(ps1,n) == 1)
    {
        printf("Cannot push !! Stack is Full (OVERFLOW)!!");
    }
    else
    {
        ps1->c[++ps1->tos] = ele;
    }
}
char pop(Stack *ps1)
{
    if(isEmpty(ps1) == 1)
    {
        printf("Cannot pop !!Stack is empty (UNDERFLOW)!!");
    }
    else
        return ps1->c[(ps1->tos)--];

}

void display(Stack *ps1)
{
    for(int i=0;i<(ps1->tos+1);i++)
    {
        printf("%c ",ps1->c[i]);
    }
}

int main()
{
    Stack *ps1,s1;
    ps1 = &s1;
    ps1->tos = -1;
    int x;
    int flag = 0;
    char ele;
    int n;
    printf("enter the size of stack;");
    scanf("%d",&n);
    ps1->c = (char*)malloc(n*sizeof(char));
    while(flag != 1)
    {
        printf("Enter your choice 1.Push 2.Pop 3.Display 4.Exit:\n");
        scanf("%d", &x );
        switch(x)
        {
            case 1:
                printf("\nEnter the element to push:");
                scanf(" %c",&ele);
                push(ele,ps1,n);
                break;
            case 2:
                ele = pop(ps1);
                printf("%c",ele);
                break;
            case 3:
                display(ps1);
                break;
            default:
                flag = 1;
                printf("exiting!!");
                break;
        }
    }
    return 0;

}