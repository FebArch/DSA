#include <stdio.h>
#include <stdlib.h>

struct Queue{
    int size;
    int f;
    int r;
    int* arr;
};

int isEmpty(struct Queue q);
void enqueue(struct Queue* q, int element);
void displayQueue(struct Queue q);
int dequeue(struct Queue* q);

int main(){
    struct Queue q;
    q.size = 10;
    q.f=-1;
    q.r = -1;
    q.arr = (int *) malloc(sizeof(int)*q.size);

    enqueue(&q, 11);
    enqueue(&q, 67);
    enqueue(&q, 34);
    enqueue(&q, 1);
    enqueue(&q, 9);

    displayQueue(q);
    int p = dequeue(&q);
    printf("1st element %d removed from the queue\n", p);
    displayQueue(q);

    free(q.arr);
    return 0;
}


int isEmpty(struct Queue q){
    if (q.r < q.size)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct Queue* q, int element){
    if (isEmpty(*q))
    {
        q->r++;
        q->arr[q->r] = element;
    }else{
        printf("Your is not empty enough to insert value in it\n");
        return;
    }
}

void displayQueue(struct Queue q){
    printf("{");
    while(q.f < q.r){
        q.f++;
        printf("%d, ", q.arr[q.f]);
    }
    printf("\b\b}\n");
}



int dequeue(struct Queue* q){
    int a = q->arr[q->f+1];
    q->arr[q->f+1] = -1;
    q->f++;
    return a;
}




