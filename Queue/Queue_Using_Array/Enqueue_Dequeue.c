#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1; 
    }
    else
    {
        return 0; 
    }
}

int isEmpty(struct queue *q)
{
    if (q->r == q->f)
    {
        return 1; 
    }
    else return 0; 
    
}

// void printQueue(struct queue *q)
// {
   
//     printf("Queue elements: ");
//     for (int i = q->f; i <= q->r; i++)
//     {
//         printf("%d ", q->arr[i]);
//     }
//     printf("\n");
// }

void enqueue (struct queue *q,int value)
{
    if(isFull(q)){
        printf("Queue is overloaded");
    }
    else
    {
        q->r++;  // or this: q->r=q->r+1;
        q->arr[q->r] = value;
    }
}

int dequeue(struct queue *q)
{
    int a = -1;
    if(isEmpty(q)) printf("QuEue is empty");
    else{
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}
int main()
{
    struct queue q;
    q.size = 10;
    q.f = q.r = -1;
    q.arr=(int*)malloc(q.size*sizeof(int));
    
    if(isEmpty(&q)){
        printf("Queue is empty\n");
    }
    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 17);
    printf("Dequeuing element is %d\n", dequeue(&q));
    printf("Dequeuing element is %d\n", dequeue(&q));
    
     
     
    free(q.arr);
}
