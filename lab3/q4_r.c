#include<stdio.h>
#include<stdlib.h>
struct DOB
    {
       int day;
       int *month;
       int year; 
    };
    struct stu_info
    {
        int reg_no;
        char *name;
        char address[100];
    };
    struct clg
    {
        char *clg_name;
        char uni_name[20];
    };
typedef struct
{
    /* data */
    struct DOB *d1;
    struct stu_info s1;
    struct clg c1;

}Student;
int main()
{
    Student *ptr;
    int n,i;
    printf("enter the no. of students:");
    scanf("%d",&n);
    ptr=(Student*)malloc(n*sizeof(Student));
    for(i=0;i<n;i++)
    {
        (ptr+i)->d1 = (struct DOB*)malloc(n*sizeof(struct DOB));
        (ptr+i)->d1->month = (int*)malloc(n*sizeof(int));
        (ptr+i)->s1.name = (char*)malloc(n*sizeof(char));
        (ptr+i)->c1.clg_name = (char*)malloc(n*sizeof(char));
    }
    for(i=0;i<n;i++)
    {
        printf("\nenter the details of student %d:\n",i+1);
        printf("enter regno,name and address:\n");
        scanf("%d %s",&(ptr+i)->s1.reg_no,(ptr+i)->s1.name);
        gets((ptr+i)->s1.address);
        printf("\nenter DOB:");
        scanf("%d %d %d",&(ptr+i)->d1->day,&(ptr+i)->d1->month,&(ptr+i)->d1->year);
        printf("\nenter clg name, university name:");
        scanf("%s %s",(ptr+i)->c1.clg_name,(ptr+i)->c1.uni_name);
    }
    for(i=0;i<n;i++)
    {
        printf("\nthe details of student %d:\n",i+1);
        printf("\nregno,name and address:\n");
        printf("%d %s %s",(ptr+i)->s1.reg_no,(ptr+i)->s1.name,(ptr+i)->s1.address);
        printf("\nDOB:");
        printf("%d %d %d",(ptr+i)->d1->day,(ptr+i)->d1->month,(ptr+i)->d1->year);
        printf("\nclg name, university name:\n");
        printf("%s %s",(ptr+i)->c1.clg_name,(ptr+i)->c1.uni_name);
    }
}
