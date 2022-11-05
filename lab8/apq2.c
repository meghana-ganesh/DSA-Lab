#include<stdio.h>
#include<stdlib.h>
typedef struct queue
{
    int *queue;
    int front,rear,size,capacity;
}Queue;

void pqinsert(Queue *apq,int ele)
{
    if(apq->front == -1)
        apq->front = 0;
    else
    {
        int tempnum = -1;
        apq->rear = (apq->rear + 1)% apq->capacity;
        if(ele>tempnum)
        {
            tempnum = ele;
            apq->queue[apq->rear] = ele; 
        }
    }
}
// t = -1
// 2 3 4 5 
// t = 2 ele = 3
// t = 3 

int pqmindelete(Queue *apq)
{
    int x;
    if(apq->front == -1)
    {
        printf("underflow\n");
        return 0;
    }
    else
    {
        x = apq->queue[apq->front];
        apq->front = (apq->front + 1) % apq->capacity;
        return x;
    }
}

void display(Queue *apq)
{
    for(int i=apq->front;i<apq->rear+1;i++)
    {
        printf("%d ",apq->queue[i]);
    }

}

int main()
{
    Queue *apq,q;
    apq = &q;
    apq->front = apq->rear = -1;
    printf("enter capacity:\n");
    scanf("%d",&apq->capacity);
    apq->queue = (int*)malloc(apq->capacity*sizeof(int));
    pqinsert(apq,2);
    pqinsert(apq,4);
    pqinsert(apq,6);
    printf("%d ",pqmindelete(apq));
    printf("\n");
    display(apq);
    return 0;

}