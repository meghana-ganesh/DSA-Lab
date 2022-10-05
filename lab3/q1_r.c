#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    int re;
    int im;
}Complex;

Complex add(Complex *p1,Complex *p2)
{
    Complex sum;
    sum.re = p1->re + p2->re;
    sum.im = p1->im + p2->im;
    return sum;
}
Complex subtract(Complex *p1,Complex *p2)
{
    Complex sum;
    sum.re = p1->re - p2->re;
    sum.im = p1->im - p2->im;
    return sum;
}
Complex multiply(Complex *p1,Complex *p2)
{
    Complex product;
    product.re = (p1->re * p2->re) - (p1->im * p2->im);
    product.im = (p1->im * p2->re) + (p1->re * p2->im);
    return product;
}
//(1+2i)*(2+3i)
int main()
{
    Complex c1,c2,result;
    Complex *p1=&c1 , *p2=&c2 , *presult=&result;
    printf("enter the first complex no. as x and y (x+iy):\n");
    scanf("%d %d",&p1->re,&p1->im);
    printf("the first complex no. is:\n");
    printf("%d + %di",p1->re,p1->im);
    printf("\nenter the second complex no. as x and y (x+iy):\n");
    scanf("%d %d",&p2->re,&p2->im);
    printf("the second complex no. is:\n");
    printf("%d + %di",p2->re,p2->im);
    result=add(p1,p2);
    printf("\nthe sum is: %d + %di",presult->re,presult->im);
    result=subtract(p1,p2);
    printf("\nthe difference is: %d + %di",presult->re,presult->im);
    result=multiply(p1,p2);
    printf("\nthe product is : %d + %di",presult->re,presult->im);
}