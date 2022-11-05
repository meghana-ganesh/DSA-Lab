#include<stdio.h>
#include<stdlib.h>
typedef struct Queue
{
    int *queue;
    int rear,front,capacity,sizeR,sizeF;
}Queue;

void insertFront(Queue *pq,int ele)
{
    if(pq->front == -1 && pq->rear == -1)
    {
        pq->front = pq->rear = 0;
        pq->queue[pq->front] = ele;
    }
    else
    {
        pq->front = (pq->front -1 + pq->capacity) % pq->capacity;
        pq->queue[pq->front] = ele;
    }
}

void insertRear(Queue *pq,int ele)
{
    if(pq->front == -1 && pq->rear == -1)
    {
        pq->front = pq->rear = 0;
        pq->queue[0] = ele;
    }
    else
    {
        pq->rear = (pq->rear + 1) % pq->capacity;
        pq->queue[pq->rear] = ele;
    }
}

int deleteFront(Queue *pq)
{
    int ele;
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

int deleteRear(Queue *pq)
{
    int ele;
    ele = pq->queue[pq->rear];
    if(pq->front == pq->rear)
    {
        pq->front = pq->rear = -1;
    }
    else
    {
        pq->rear = (pq->rear - 1 + pq->capacity) % pq->capacity;
    }
    return ele;
}

void display(Queue *pq)
{
    int i; 
    i = pq->front; //4
    while(i != pq->rear) 
    { 
    printf("%d ",pq->queue[i]); 
    i = (i+1) % pq->capacity; 
    } 
    printf("%d ",pq->queue[pq->rear]); 
}

int main()
{
    Queue *pq,q;
    pq = &q;
    pq->front = pq->rear = -1;
    pq->sizeR=pq->sizeF=0;
    printf("enter the capacity of queue:\n");
    scanf("%d",&pq->capacity);
    printf("pq->capacity %d\n",pq->capacity);
    pq->queue = (int*)malloc(pq->capacity*sizeof(int));
    insertFront(pq,20);    
    insertFront(pq,10);    
    insertRear(pq,30);    
    insertRear(pq,50);    
    insertRear(pq,80);
    display(pq);
    printf("front delete: %d \n",deleteFront(pq));
    printf("rear delete:%d \n",deleteRear(pq));
    display(pq);
}

