#include <stdio.h>
#include <stdlib.h>

struct  Node
{
    int data;
    struct Node* next;
};

void setLinkedList(struct Node *node, int size);
void displayLinkedList(struct Node *node);
void addLinkedList(struct Node *node, int element);

int main(){
    struct Node* n0;
    n0 = (struct Node*) malloc(sizeof(struct Node));
    
    struct Node* n1;
    n1 = (struct Node*) malloc(sizeof(struct Node));
    
    struct Node* n2;
    n2 = (struct Node*) malloc(sizeof(struct Node));
    
    struct Node* n3;
    n3 = (struct Node*) malloc(sizeof(struct Node));

    n0->data = 9;
    n0->next = n1;

    n1->data = 18;
    n1->next = n2;

    n2->data = 27;
    n2->next = n3;

    n3->data = 36;
    n3->next = NULL;

    displayLinkedList(n0);
    addLinkedList(n3, 45);
    displayLinkedList(n0);
    return 0;
}

// Garbage function -> this function will not set the linkedList with just head and the size of the list parameter as moving to next node with pointer arithmetic didn't takes us to next node n1
// void setLinkedList(struct Node *node, int size){
//     int i=1;
//     while (i <= size)
//     {
//         (*node).data = 4*i;
//         if (i==size)
//         {
//             (*node).next = NULL;
//             break;
//         }
//         (*node).next = node+i; // n1, 
//         node++;
//         i++;
//     }
// }

void displayLinkedList(struct Node *node){
    printf("Printing Linked List!\n{");
    while (node != NULL)
    {
        printf("%d, ", node->data);
        node = node->next;
    }
    printf("\b\b}\n");
}

void addLinkedList(struct Node *node, int element){
    struct Node* newNode; 
    newNode = (struct Node*) malloc(sizeof(struct Node));

    newNode->data = element;
    newNode->next = node->next;
    node->next = newNode;

}

/*
Rough Work:

    n2  =  (27, 2000) --->   n3  =  (36,  NULL);
                    n = (45,1012)
*/