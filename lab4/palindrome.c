#include<stdio.h>
#include<string.h>
int palindrome(char str[],int i);
int main()
{
    char str[100];
    printf("enter the string:");
    gets(str);
    if(palindrome(str,0) == 1)
    {
        printf("It is a palindrome");
    }
    else
        printf("It is not a palindrome");

}
int palindrome(char str[],int i)
{
    int n = strlen(str);
    if(i == n/2)
        return 1;
    if(str[i] == str[n-i-1])
        return palindrome(str,i+1);
    else
        return -1;
}
// n/2 i to n/2 n-i-1 to n/2