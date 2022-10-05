#include<stdio.h>
void Reverse(int *ptr,int n);
void Reverse(int *ptr,int n)
{
    int i;
    int temp;
    for(i=0;i<n/2;i++)
    {
        temp=*(ptr+i);
        *(ptr+i)=*(ptr+n-i-1);
        *(ptr+n-i-1)=temp;
    }
}
int main()
{
   int n,i;
   printf("enter the size of the array:");
   scanf("%d",&n);
   int arr[n];
   int *ptr;
   ptr=arr;
   printf("enter the elements of the array:");
   for(i=0;i<n;i++)
   {
    scanf("%d",(ptr+i));
   }
   Reverse(ptr,n);
   for(i=0;i<n;i++)
   {
    printf("%d",*(ptr+i));
   }
}
// 12345 n/2=2
// i=0,i=1