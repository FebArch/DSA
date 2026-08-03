#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};

void display(struct Node* n);
struct Node* reverse(struct Node* n);

int main(){
    struct Node* n0 = (struct Node*) malloc(sizeof(struct Node));
    struct Node* n1 = (struct Node*) malloc(sizeof(struct Node));
    struct Node* n2 = (struct Node*) malloc(sizeof(struct Node));
    struct Node* n3 = (struct Node*) malloc(sizeof(struct Node));
    struct Node* n4 = (struct Node*) malloc(sizeof(struct Node));

    n0->data = 7;
    n0->prev = NULL;
    n0->next = n1;

    n1->data = 11;
    n1->prev = n0;
    n1->next = n2;

    n2->data = 9;
    n2->prev = n1;
    n2->next = n3;

    n3->data = 3;
    n3->prev = n2;
    n3->next = n4;

    n4->data = 12;
    n4->prev = n3;
    n4->next = NULL;

    // printf("%zu\n", sizeof(*n0));
    display(n0);
    n0 = reverse(n0);
    display(n0);

    return 0;
}



void display(struct Node* n){
    struct Node* ptr = n;

    while (ptr != NULL)
    {
        printf("%d, ", ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}


struct Node* reverse(struct Node* n){
    struct Node* p = n;
    struct Node* q = n->next;
    struct Node* temp;

    while (q!=NULL)
    {
        temp = p;
        p=q;
        // printf("> %d\n", p->data);
        q=q->next;
        p->next=temp;
    }
    n->next = NULL;
    p->prev = NULL;
    return p;
}











































