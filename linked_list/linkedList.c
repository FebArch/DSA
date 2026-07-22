#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void printLinkedList(struct Node* ptr);

int main(){
    int a;
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* forth;
    
    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));
    forth = (struct Node*) malloc(sizeof(struct Node));

    // *head.data = 6; not allowed! i think . has higher priority over *

    (*head).data = 11;
    (*head).next = second;
    // head->data = 9;

    (*second).data = 9;
    (*second).next = third;

    (*third).data = 26;
    (*third).next = forth;

    forth->data = 67;
    forth->next = NULL;

    printLinkedList(head);
    return 0;
}

void printLinkedList(struct Node* ptr){
    while (ptr != NULL)
    {
        printf("%d\n", (*ptr).data);
        ptr = ptr->next;
    }
    
    // printf("%d\n", (*ptr).data);
}
