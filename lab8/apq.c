#include<stdio.h>
#include<stdlib.h>
typedef struct queue
{
    int *queue;
    int front,rear,capacity,size;
}Queue;


void pqinsert(Queue *apq,int ele)
{
    if(apq->front == -1)
        apq->front = 0;
    else
    {
       apq->rear =  (apq->rear + 1)% apq->capacity;
       apq->queue[apq->rear] = ele;
    }

}

int pqmindelete(Queue *apq)
{
    int small = apq->queue[apq->front];
    int index = 0,i;
    for(i=apq->front;i<apq->rear+1;i++)
    {
        if(small>apq->queue[i])
        {
            small = apq->queue[i];
            index = i;
        }
    }
    for(i = index+1;i<apq->rear+1;i++)
    {
        apq->queue[i-1] = apq->queue[i];
    }
    apq->rear--;
    return small;

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
    printf("enter the capacity of the queue:\n");
    scanf("%d",&apq->capacity);
    apq->queue = (int*)malloc(apq->capacity*sizeof(int));
    apq->front = apq->rear = -1;
    pqinsert(apq,2);
    pqinsert(apq,4);
    pqinsert(apq,6);
    printf("%d",pqmindelete(apq));
    printf("\n");
    display(apq);
    return 0;
}