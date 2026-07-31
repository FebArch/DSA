#include <stdio.h>
#include <stdlib.h>

struct Queue{
    int size;
    int f;
    int r;
    int* arr;
};

int isEmpty(struct Queue q);
int isFull(struct Queue q);
void displayQueue(struct Queue q);
void enqueue(struct Queue* q, int element);
int dequeue(struct Queue* q);

int main(){
    struct Queue q1;
    q1.size = 6;
    q1.f = -1;
    q1.r = -1;
    q1.arr = (int* ) malloc((q1.size)*(sizeof(int)));

    if (isEmpty(q1))
    {
        printf("Queue is Empty\n");
    }

    enqueue(&q1, 11);
    enqueue(&q1, 34);
    enqueue(&q1, 23);
    enqueue(&q1, 12);
    enqueue(&q1, 78);
    enqueue(&q1, 99);
    
    displayQueue(q1);
    if (isFull(q1))
    {
        printf("The Queue is full!\n");
    }
    
    int a = dequeue(&q1);
    printf("Dequeued Element is %d\n", a);
    displayQueue(q1);
    

    return 0;
}


void displayQueue(struct Queue q){
    printf("{");
    for (int i = q.f; i < q.r; i++)
    {
        q.f++;
        printf("%d, ", q.arr[q.f]);
    }
    printf("\b\b}\n");
}


void enqueue(struct Queue* q, int element){
    if (!isFull(*q))
    {
        q->r++;
        q->arr[q->r] = element;
    }
    
    return;
}


int isEmpty(struct Queue q){
    if (q.f == -1 && q.r == -1)
    {
        return 1;
    }
    return 0;
}


int isFull(struct Queue q){
    if (q.r == (q.size-1))
    {
        return 1;
    }
    return 0;
}


int dequeue(struct Queue* q){
    int a;
    if (!isEmpty(*q))
    {
        q->f++;
        a=q->arr[q->f];
    }else{
        printf("Queue is empty nothing to dequeue\n");
        return -1;
    }
    return a;
}

























