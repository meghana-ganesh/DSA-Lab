#include<stdlib.h>
#include<stdio.h>
#include<string.h>
typedef struct Queue
{
    char **queue;
    int front,rear,capacity;
}Queue;

void InsertRear(Queue *pq,char ele[])
{
    if(pq->front == -1 && pq->rear == -1)
    {
        pq->front = pq->rear = 0;
        pq->queue[pq->front] = ele;
    }
    else
    {
        pq->rear = (pq->rear + 1) % pq->capacity;
        pq->queue[pq->rear] = ele;
    }
}

void InsertFront(Queue *pq,char ele[])
{
    if(pq->front == -1 && pq->rear == -1)
    {
        pq->front = pq->rear = 0;
        pq->queue[pq->rear] = ele;
    }
    else
    {
        pq->front = (pq->front - 1 + pq->capacity) % pq->capacity;
        pq->queue[pq->front] = ele;
    }
}
//not about what side u r moving to but
//what side u r deleteing from
//so no deleterear
char* DeleteFront(Queue *pq)
{
    char *ele;
    ele = pq->queue[pq->front];
    if(pq->front == pq->rear)
    {
        pq->front = pq->rear = -1;
    }
    else
    {
        pq->front = (pq->front + 1) % pq->capacity;
    }
    return ele;
}

void display(Queue *pq)
{
    int i = pq->front;
    while(i != pq->rear)
    {
        printf("%s ",pq->queue[i]);
        i = (i+1) % pq->capacity;
    }
    printf("%s ",pq->queue[pq->rear]);
}

int main()
{
    Queue *pq,q;
    pq = &q;
    pq->front = pq->rear = -1;
    printf("enter capacity:\n");
    scanf("%d",&pq->capacity);
    pq->queue = (char**)malloc(pq->capacity*sizeof(char*));
    for(int  i=0;i<pq->capacity;i++)
    {
        pq->queue[i] = (char*)malloc(20*sizeof(char));
    }
    InsertFront(pq,"my");
    InsertFront(pq,"hi");
    InsertRear(pq,"name");
    InsertRear(pq,"is");
    display(pq);
    printf("\n");
    printf("deleted: %s ",DeleteFront(pq));
    return 0;
}

