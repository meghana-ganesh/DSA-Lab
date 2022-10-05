int Lsearch(int a[],int n,int e);
#include<stdio.h>
int main()
{
    int n,i,search,e;
    int a[100];
    printf("enter the no. of elements:\n");
    scanf("%d",&n);
    printf("enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element you want to search:\n");
    scanf("%d",&e);
    search=Lsearch(a,n,e);
    printf(" %d ", search);
}
int Lsearch(int a[],int n,int e)
{
    int i,l,c=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==e)
        {
            l=i;
            c=1;
        }
    }
    if(c==0)
    {
        l=-1;
    }
    return l;
}