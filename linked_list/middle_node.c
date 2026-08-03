#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void display(struct Node n);
int middle(struct Node *n);

int main()
{
    struct Node *n0 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n3 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n4 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n5 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n6 = (struct Node *)malloc(sizeof(struct Node));

    n0->data = 11;
    n0->next = n1;

    n1->data = 7;
    n1->next = n2;

    n2->data = 34;
    n2->next = n3;

    (*n3).data = 17;
    (*n3).next = n4;

    n4->data = 55;
    n4->next = NULL;

    // n5->data = 9;
    // n5->next = NULL;  // if uncommented update the for loop below from (; i < 5; ) to (; i < 6; );

    display(*n0);
    int m = middle(n0);
    printf("Middle Element is: %d\n", m);

    struct Node *fn = n0;
    struct Node *next;
    for (int i = 0; i < 5; i++)
    {
        next = fn->next;
        free(fn);
        fn = next;
    }

    return 0;
}

void display(struct Node n)
{
    printf("{ ");
    while ((n.next) != NULL)
    {
        printf("%d, ", n.data);
        n = *(n.next);
    }
    printf("%d }\n", n.data);
}

int middle(struct Node *n)
{
    // int m;
    struct Node *oneStepPtr = n;
    struct Node *twoStepPtr = n;

    while ((twoStepPtr != NULL) && ((twoStepPtr->next) != NULL))
    {
        oneStepPtr = oneStepPtr->next;
        twoStepPtr = twoStepPtr->next->next;
        printf("%d, %d\n", oneStepPtr->data, twoStepPtr->data);
    }
    return oneStepPtr->data;
}

// { 11, 7, 34, 17, 55, 9 }

// 34 9