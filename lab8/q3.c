#include<stdio.h>
#include<stdlib.h>
#include <string.h>
typedef struct Queue
{
    char *queue;
    int front,rear,capacity;
}Queue;

void InsertRear(Queue *pq,char ele)
{
    if(pq->front == -1 && pq->rear == -1)
    {
        pq->front = pq->rear = 0;
        pq->queue[pq->rear] = ele;
    }
    else
    {
        pq->rear = (pq->rear + 1) % pq->capacity;
        pq->queue[pq->rear] = ele;
    }
}

char DeleteFront(Queue *pq)
{
    char ele;
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

char DeleteRear(Queue *pq)
{
    char ele;
    ele = pq->queue[pq->rear];
    if(pq->front == pq->rear)
    {
        pq->front = pq->rear = -1;
    }
    else
    {
        pq->rear = (pq->rear -1 + pq->capacity) % pq->capacity;
    }
    return ele;
}

void display(Queue *pq)
{
    int i = pq->front;
    while(i != pq->rear)
    {
        printf("%c ",pq->queue[i]);
        i = (i+1) % pq->capacity;
    }
    printf("%c ",pq->queue[pq->rear]);
}

void PalinCheck(Queue *pq)
{
    char x,y;
    int flag = 1,flag2 = 0;
    while(pq->front != -1 && pq->rear != -1)
    {
        if((pq->capacity%2 != 0) && pq->front == pq->rear && flag == 1)
        {
            break;
        }
        x = DeleteFront(pq);
        y = DeleteRear(pq);
        if(x != y)
        {
            flag = 0;
        }
    }
    if(flag == 1)
    {
        printf("palindrome\n");
    }
    else
    {                     
        printf("not palindrome\n");
    }
}

int main()
{
    Queue *pq,q;
    pq=&q;
    int i;
    char str[20];
    pq->front = pq->rear = -1;
    printf("enter the string:\n");
    gets(str);
    pq->capacity = strlen(str);
    pq->queue = (char*)malloc(pq->capacity*sizeof(char));
    for(i=0;i<pq->capacity;i++)
    {
        InsertRear(pq,str[i]);
    }
    // pq->capacity = 4;
    // InsertRear(pq,'a');
    // InsertRear(pq,'b');
    // InsertRear(pq,'b');
    // InsertRear(pq,'a');
    display(pq);
    printf("\n");
    PalinCheck(pq);
    return 0;
}