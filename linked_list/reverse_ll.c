#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void display(struct Node* head);
struct Node* reverse(struct Node* head);

int main(){
    struct Node* head = (struct Node *) malloc(sizeof(struct Node));
    struct Node* n1 = (struct Node *) malloc(sizeof(struct Node));
    struct Node* n2 = (struct Node *) malloc(sizeof(struct Node));
    struct Node* n3 = (struct Node *) malloc(sizeof(struct Node));

    head->data = 11;
    head->next = n1;

    n1->data = 6;
    n1->next = n2;

    n2->data = 9;
    n2->next = n3;

    n3->data = 21;
    n3->next = NULL;

    display(head);
    head = reverse(head);
    display(head);
    return 0;
}



void display(struct Node* head){
    struct Node* ptr = head;
    while (ptr != NULL)
    {
        printf("%d, ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
    return;
}


struct Node* reverse(struct Node* head){
    struct Node*p = head;
    struct Node*q = head->next;
    struct Node*temp;

    while (q!=NULL)
    {
        temp = p;
        p = q;
        q = q->next;
        p->next = temp;
    }
    head->next = NULL;
    return p;
}


































































