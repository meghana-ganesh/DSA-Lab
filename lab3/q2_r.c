#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
    /* data */
    char name[20];
    int rollno;
    float cgpa;
}Student;
void sort(Student *parr,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((parr+j)->rollno < (parr+i)->rollno)
            {
                Student temp = *(parr+i);
                *(parr+i) = *(parr+j);
                *(parr+j) = temp;

            }
        }
    }
}
//40 30 10 20
//
int main()
{
    // Student s;
    int n,i;
    Student *parr;
    printf("enter the no. of students:");
    scanf("%d",&n);
    parr=(Student*)malloc(n*sizeof(Student));
    for(i=0;i<n;i++)
    {
        printf("enter the student details:");
        scanf("%s %d %f",(parr+i)->name,&(parr+i)->rollno,&(parr+i)->cgpa);
    }
    sort(parr,n);
    printf("showing student details:");
    for(i=0;i<n;i++)
    {
        printf("%s %d %f",(parr+i)->name,(parr+i)->rollno,(parr+i)->cgpa);
    }

}