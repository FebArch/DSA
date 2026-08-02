#include <stdio.h>
#include <stdlib.h>

struct CQueue {
    int size;
    int f;
    int r;
    int *arr;
};


int isEmpty(struct CQueue cq);

void enqueue(struct CQueue* cq, int element);
void displayQueue(struct CQueue cq);

int main(){
    struct CQueue q;
    q.size = 6;
    q.f=-1;
    q.r=-1;
    q.arr = (int *) malloc(q.size*sizeof(int));

    if (isEmpty(q))
    {
        printf("Queue is empty\n");
    }
    enqueue(&q, 7);
    enqueue(&q, 11);
    enqueue(&q, 9);
    enqueue(&q, 18);
    enqueue(&q, 34);
    enqueue(&q, 47);

    displayQueue(q);

    free(q.arr);
    return 0;
}


int isEmpty(struct CQueue cq){
    if (cq.r < (cq.size-1))
    {
        return 1;
    }
    return 0;
}


int isFull(struct CQueue cq){
    if (cq.f == cq.r)
    {
        /* code */
    }
    
}

void enqueue(struct CQueue* cq, int element){
    if (isEmpty(*cq))
    {
        cq->r++;
        cq->arr[cq->r] = element;
    }else{
        printf("Queue is full cannot insert more element!\n");
    }
}



void displayQueue(struct CQueue cq){
    while (cq.f<cq.r)
    {
        cq.f++;
        printf("%d, ", cq.arr[cq.f]);
    }
    
}
