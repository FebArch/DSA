#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

void printList(struct Node *head);

int main()
{
    struct Node *n0 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n3 = (struct Node *)malloc(sizeof(struct Node));

    n0->prev = NULL;
    n0->data = 2;
    n0->next = n1;

    n1->prev = n0;
    n1->data = 5;
    n1->next = n2;

    n2->prev = n1;
    n2->data = 9;
    n2->next = n3;

    n3->prev = n2;
    n3->data = 11;
    n3->next = NULL;

    printList(n0);

    return 0;
}

void printList(struct Node *head)
{
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d, ", ptr->data);
        if (ptr->next == NULL)
        {
            break;
        }
        ptr = ptr->next;
    }
    printf("\n");
    while (ptr != NULL)
    {
        printf("%d, ", ptr->data);
        ptr = ptr->prev;
    }
    
}
