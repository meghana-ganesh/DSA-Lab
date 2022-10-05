#include<stdio.h>
#include<string.h>
void copy(char str[],int i,char cpystr[]);
int main()
{
    char str[100],cpystr[100];
    printf("enter the string:");
    gets(str);
    copy(str,0,cpystr);
    printf("copied string is %s",cpystr);
}
void copy(char str[],int i,char cpystr[])
{
    int n = strlen(str);
    cpystr[i] = str[i];
    if(i == n)
        return;
    copy(str,i+1,cpystr);
}