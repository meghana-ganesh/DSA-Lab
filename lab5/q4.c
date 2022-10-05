#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
    /* data */
    int *stack;
    int tos;
    int *newstack;
}Stack;
void push(Stack *ps1,int n,int arr[])
{
    printf("pushing");
    if(ps1->tos == n-1)
    {
        printf("Stack is full!!Cannot push!!");
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            ps1->stack[++ps1->tos] = arr[i];
        }
    }
}
int pop(Stack *ps1)
{
    if(ps1->tos == -1)
    {
        printf("Cannot pop!!Stack is empty!!");
    }
    else
    {
        return ps1->stack[ps1->tos--];
    }
}
void delete(Stack *ps1,int k,int n,int arr[])
{
    int i,count;
    while(ps1->tos != -1)
    {
        for(i=1;i<n;i++)
        {
            if(ps->stack[ps->tos] < arr[i])
            {
                pop(ps1);
                // count++;
            }
            // if(count == k)
            // {
            //     break;
            // }
        }
        // ps1->tos -=1;
    }
     
}
void display(Stack *ps1)
{
    for(int i=0;i<ps1->tos+1;i++)
    {
        printf("%d ",ps1->stack[i]);
    }
}
//[20,10,25,30,40] array
//stack top = 40 k=2
//40 <20 pop 40 push
//30 <10 pop 30 push
//25 <25 pop 25 push
//20 <25 
//newstack 40 30 25 
int main()
{
    Stack *ps1,s1;
    ps1 = &s1;
    ps1->tos == -1;
    int n,k;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    ps1->stack = (int *)malloc(n*sizeof(int));
    int arr[n];
    printf("\nenter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\nenter k:");
    scanf("%d",&k);
    push(ps1,n,arr);
    printf("after push");
    display(ps1);
    return 0;
}