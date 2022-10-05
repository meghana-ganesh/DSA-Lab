#include<stdio.h>
#include<stdlib.h>
void read(int r,int c,int **matrix);
void display(int r,int c,int **matrix);
void multiply(int r1,int c1,int r2,int c2,int **matrix1,int **matrix2,int **result);
void read(int r,int c,int **matrix)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
}
void display(int r,int c,int **matrix)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",*(*(matrix+i)+j));
        }
        printf("\n");
    }
}
void multiply(int r1,int c1,int r2,int c2,int **matrix1,int **matrix2,int **result)
{
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            *(*(result+i)+j)=0;
            for(int k=0;k<c1;k++)
            {
                *(*(result+i)+j) += *(*(matrix1 + i)+k) * *(*(matrix2+k)+j); 
            }
        }
    }
}
int main()
{
    int r1,c1,r2,c2,i,j;
    printf("enter the rows and columns of matrix 1:");
    scanf("%d %d",&r1,&c1);
    printf("enter the rows and columns of matrix 2:");
    scanf("%d %d",&r2,&c2);
    while(r1!=c2)
    {
        printf("cannot multiply!!enter correct dimensions of matrix!\n");
        printf("enter the rows and columns of matrix 1:");
        scanf("%d %d",&r1,&c1);
        printf("enter the rows and columns of matrix 2:");
        scanf("%d %d",&r2,&c2);
    }

    printf("enter the elements of matrix1:");
    int **matrix1=(int **)malloc(r1*sizeof(int *));
    for(i=0;i<c1;i++)
    {
        matrix1[i]=(int *)malloc(c1*sizeof(int));
    }
    read(r1,c1,matrix1);

    
    printf("enter the elements of matrix2:");
    int **matrix2=(int **)malloc(r2*sizeof(int *));
    for(i=0;i<c2;i++)
    {
        matrix2[i]=(int *)malloc(c2*sizeof(int));
    }
    read(r2,c2,matrix2);

    
    //result matrix
    int **result=(int **)malloc(r1*sizeof(int *));
    for(i=0;i<c2;i++)
    {
        result[i]=(int *)malloc(c2*sizeof(int));
    }
    multiply(r1,c1,r2,c2,matrix1,matrix2,result);
    display(r1,c2,result);
}