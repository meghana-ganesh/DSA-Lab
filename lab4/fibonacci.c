#include<stdio.h>
int fibonacci(int n);
int main()
{
    int i,n;
    printf("enter the no. of terms:");
    scanf("%d",&n);
    fibonacci(n);
    for(i=0;i<n;i++)
    {
        printf("%d ",fibonacci(i));
    }
}
int fibonacci(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}