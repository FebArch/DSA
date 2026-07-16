// circularLinkedListInsertion.c

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void printList(struct Node* head);
void insertAtIndex(struct Node* head, int index, int element);

int main(){
    struct Node* n0 = (struct Node*) malloc(sizeof(struct Node));
    struct Node* n1 = (struct Node*) malloc(sizeof(struct Node));
    struct Node* n2 = (struct Node*) malloc(sizeof(struct Node));
    struct Node* n3 = (struct Node*) malloc(sizeof(struct Node));
    struct Node* n4 = (struct Node*) malloc(sizeof(struct Node));

    n0->data = 99;
    n0->next = n1;

    n1->data = 98;
    n1->next = n2;

    n2->data = 97;
    n2->next = n3;

    n3->data = 96;
    n3->next = n4;

    n4->data = 95;
    n4->next = n0;

    printList(n0);
    insertAtIndex(n0, 2, 76);
    insertAtIndex(n0, 4, 12);
    printList(n0);
    return 0;
}

void printList(struct Node* head){
    struct Node* ptr = head;

    do
    {
        printf("%d, ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
    printf("\n");
}

void insertAtIndex(struct Node* node, int index, int element){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = element;

    for (int i = 0; i < index; i++)
    {
        if (i==(index-1))
        {
            newNode->next = node->next;
            node->next = newNode;
            break;
        }
        node = node->next;
    }   
}
