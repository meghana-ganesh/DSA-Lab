#include<stdio.h>
int* pointer(int *a);

int main()
{
    int x=5;
    int *xp=&x;
    int *xpp=xp;
    printf("the value of x is %d\n",x);
    printf("the address of x is %p and the value stored in the pointer is %d\n",xp,*xp);
    printf("the address of xp is %p and the value of x is %d\n",xpp,*xpp);
    int *c=pointer(xp);
    printf("the returned pointer is %d and its address is %p\n",*c,c);

}

int* pointer(int *a)
{
    return a;
}