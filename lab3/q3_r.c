#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    /* data */
    char name[20];
    struct DOB
    {
        int day;
        int month;
        int year;
    }d1;
    struct address
    {
        int house_no;
        int zip_code;
        char state[20];
    }a1;

}Employee;
int main()
{
    int i,n;
    Employee *parr;
    Employee *ptr;
    printf("enter the no. of employees:");
    scanf("%d",&n);
    parr = (Employee*)malloc(n*sizeof(Employee));
    ptr=parr;
    for(i=0;i<n;i++)
    {
        printf("\nenter name,dob,house no,zip code,state of employee %d:\n",i+1);
        scanf("%s %d %d %d %d %d %s",(ptr+i)->name,&(ptr+i)->d1.day,&(ptr+i)->d1.month,&(ptr+i)->d1.year,&(ptr+i)->a1.house_no,&(ptr+i)->a1.zip_code,&(ptr+i)->a1.state);
    }
    printf("displaying employee info:");
    for(i=0;i<n;i++)
    {
        printf("\nemployee %d:\n",i+1);
        printf("%s %d %d %d %d %d %s",(ptr+i)->name,(ptr+i)->d1.day,&(ptr+i)->d1.month,(ptr+i)->d1.year,(ptr+i)->a1.house_no,(ptr+i)->a1.zip_code,(ptr+i)->a1.state);
    }

    
}
