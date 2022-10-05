#include<stdio.h>
#include<string.h>
typedef struct
{
    /* data */
    char stack[20];
    int tos;
}Stack;

void push(Stack *ps1,char str[])
{
   if(ps1->tos == strlen(str) -1 )  
   {
    printf("Cannot push!!Stack Overflow!!");
   } 
   else
   {
    for(int i=0;i<strlen(str);i++)
    {
        ps1->stack[++ps1->tos] = str[i];
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
int isPalin(Stack *ps1,char str[])
{
    for(int i=0;i<strlen(str)/2;i++)
    {
        if(pop(ps1) == str[i])
        {
            return 1;
        }
        else
            return 0;
    }
}

int main()
{
    Stack *ps1,s1;
    ps1 = &s1;
    ps1->tos = -1;
    char str[20];
    printf("Enter the string:");
    gets(str);
    push(ps1,str);
    int x = isPalin(ps1,str);
    if(x==1)
    {
        printf("It is a palindrome");
    } 
    else
    {
        printf("It is NOT a palindrome");
    }  
    return 0; 
    // puts(ps1->stack);
}
