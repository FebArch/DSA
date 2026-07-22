#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void printList(struct Node* head);

int main(){
    struct Node* n0 = (struct Node*) malloc(sizeof(struct Node));
    struct Node* n1 = (struct Node*) malloc(sizeof(struct Node));
    struct Node* n2 = (struct Node*) malloc(sizeof(struct Node));
    struct Node* n3 = (struct Node*) malloc(sizeof(struct Node));
    struct Node* n4 = (struct Node*) malloc(sizeof(struct Node));

    n0->data = 10;
    n0->next = n1;

    n1->data = 11;
    n1->next = n2;

    n2->data = 12;
    n2->next = n3;

    n3->data = 13;
    n3->next = n4;

    n4->data = 14;
    n4->next = n0;

    printList(n0);

    return 0;
}

void printList(struct Node* head){
    struct Node* ptr = head;
    do
    {
        printf("%d, ", ptr->data);
        ptr = ptr->next;   // 10, 11, 12, 13, 14
    }while (ptr != head);
    
}