#include<stdio.h>
#include<stdlib.h>
int Smallest(int *arr,int n);
int Smallest(int *arr,int n)
{
    int small;
    small=*arr;
    for(int i=1;i<n;i++)
    {
        if(small > *(arr+i))
        {
            int temp = *(arr+i);
            *(arr+i) = small;
            small=temp;
        }
    }
    return small;

}
int main()
{
    int n,i,x;
    printf("enter the size of the array:");
    scanf("%d",&n);
    printf("enter the elements of the array:");
    int *arr=(int*) malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
    x=Smallest(arr,n);
    printf("the smallest element is: %d",x);
    // for(i=0;i<n;i++)
    // {
    //     printf("%d",*(arr+i));
    // }
}