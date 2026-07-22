#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};


int main(){

    struct Node* n0 = (struct Node*) malloc(sizeof(struct Node));
    struct Node* n1 = (struct Node*) malloc(sizeof(struct Node));

    // struct Node n1 = {.data=99, .next=NULL};
    // struct Node n0 = {.data=19, .next=&n1};

    n0->data = 91;
    n0->next = n1;
    n1->data = 10;
    n1->next = NULL;
    n1 = n0;

    // n1 =  {.data = 45, .next = NULL};

    printf(">> %d\n", (*n0));
    printf(">> %d\n", *n1);
    printf(">> %d\n", *((*n0).next));
    
    return 0;
}