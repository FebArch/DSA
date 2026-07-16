#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void printLinkedArray(struct Node *head);
void insertAtIndex(struct Node *head, int index, int element);


int main()
{
    struct Node *n0 = (struct Node*) malloc(sizeof(struct Node));
    struct Node *n1 = (struct Node*) malloc(sizeof(struct Node));
    struct Node *n2 = (struct Node*) malloc(sizeof(struct Node));
    struct Node *n3 = (struct Node*) malloc(sizeof(struct Node));
    struct Node *n4 = (struct Node*) malloc(sizeof(struct Node));

    n0->data = 90;
    n0->next = n1;

    n1->data = 92;
    n1->next = n2;

    n2->data = 93;
    n2->next = n3;

    n3->data = 78;
    n3->next = n4;

    n4->data = 86;
    n4->next = NULL;

    printLinkedArray(n0);
    insertAtIndex(n0, 3, 146);
    printLinkedArray(n0);
    return 0;
}

void insertAtIndex(struct Node *head, int index, int element){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    struct Node* node = head;

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

void printLinkedArray(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d, ", node->data);
        node = node->next;
    }
    printf("\n");
}