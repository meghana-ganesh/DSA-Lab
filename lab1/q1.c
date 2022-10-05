double add(double a[],int n);
#include<stdio.h>
int main()
{
int n,i;
double c;
double a[100];
printf("enter the size of the array:\n");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
{
    scanf("%lf",&a[i]);
}
c=add(a,n);
printf("%lf",c);
return 0;
}
double add(double a[],int n)
{
    double sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum;
}