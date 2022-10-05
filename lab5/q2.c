//ragged array
//binary search,binary search using recursion
#include<stdio.h>

typedef struct 
{
    /* data */
    int stack[50];
    int tos;
}Stack;
void push(int rem,Stack *ps1)
{
    if(ps1->tos == 49)
    {
        printf("Stack overflow!!Cannot push!!");
    }
    else
    {
        ps1->stack[++(ps1->tos)] = rem;
    }
}
int pop(Stack *ps1)
{
    if(ps1->tos == -1)
    {
        printf("Stack is empty!!Cannot pop!!");
    }
    else
    {
        return ps1->stack[(ps1->tos)--];
    }
}

void DectoBin(int num,Stack *ps1)
{
    while(num>0)
    {
        int rem = num%2;
        push(rem,ps1);
        num = num /2;
    }
}
// void display(Stack *ps1)
// {
//     for(int i=0;i<ps1->tos+1;i++)
//     {
//         printf("%d ",ps1->stack[i]);
//     }
// }
int main()
{
    printf("hi");
    Stack *ps1,s1;
    ps1 = &s1;
    ps1->tos = -1;
    int num;
    printf("Enter the decimal number:\n");
    scanf("%d",&num);
    DectoBin(num,ps1);
    // display(ps1);
    while(ps1->tos != -1)
    {
        printf("%d ",pop(ps1));
    }
    return 0;
}
//4 100