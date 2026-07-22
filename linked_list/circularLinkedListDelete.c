// circularLinkedListDelete.c

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void printList(struct Node *head);
int deleteElement(struct Node *head, int element);

int main(){
    struct Node* n0 = (struct Node*) malloc(sizeof(struct Node));
    struct Node* n1 = (struct Node*) malloc(sizeof(struct Node));
    struct Node* n2 = (struct Node*) malloc(sizeof(struct Node));
    struct Node* n3 = (struct Node*) malloc(sizeof(struct Node));
    struct Node* n4 = (struct Node*) malloc(sizeof(struct Node));

    n0->data = 11;
    n0->next = n1;

    n1->data = 12;
    n1->next = n2;

    n2->data = 13;
    n2->next = n3;

    n3->data = 14;
    n3->next = n4;

    (*n4).data = 15;
    (*n4).next = n0;

    printList(n0);
    int element = 11;
    int r = deleteElement(n0, element);
    if (r==0)
    {
        printList(n0);
    }else{
        printf("Sorry the element %d is not present in list!\n", element);
        printList(n0);
    }
    
    return 0;
}

void printList(struct Node *head){
    struct Node* ptr=head;
    do
    {
        printf("%d, ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
    printf("\n");
}

int deleteElement(struct Node *head, int element){
    struct Node* p = head;
    struct Node* q = head->next;
    do
    {
        if (q->data == element)
        {
            p->next = q->next;
            free(q);
            return 0;
            break;
        }
        
        p = (*p).next;
        q = (*q).next;

        if (q==head)
        {
            return 1;
        }
        
    } while (p != head);
}
