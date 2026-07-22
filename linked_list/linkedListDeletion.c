#include <stdio.h>
#include <stdlib.h>


struct Node{
    int data;
    struct Node* next;
};

void linkedListDelete(struct Node* head, int index);
void printLinkedList(struct Node* node);


int main(){
    struct Node* n0;
    n0 = (struct Node*) malloc(sizeof(struct Node));

    struct Node* n1;
    n1 = (struct Node*) malloc(sizeof(struct Node));

    struct Node* n2;
    n2 = (struct Node*) malloc(sizeof(struct Node));

    struct Node* n3;
    n3 = (struct Node*) malloc(sizeof(struct Node));

    n0->data = 12;
    n0->next = n1;

    n1->data = 24;
    n1->next = n2;

    n2->data = 36;
    n2->next = n3;

    (*n3).data = 48;
    (*n3).next = NULL;
    printLinkedList(n0);
    linkedListDelete(n0, 0);
    printLinkedList(n0);
    
    printf(">>n0: %d\n", n0->data);
    printf(">>n0: %p\n", n0->next);

    printf(">>n1: %d\n", n1->data);
    printf(">>n1: %p\n", n1->next);
    return 0;
}

void linkedListDelete(struct Node* head, int index){
    // printf("%d", *((*node).next));
    int i=0;

    while (i<=index)
    {
        printf("hello, ");
        if(i==(index-1)){
            struct Node* temp = head->next;
            head->next = (*(head->next)).next;
            free(temp);
            break;
        }else if(index == 0){
            struct Node* ptr = (head->next);
            head->data = (*(head->next)).data;
            head->next = (*(head->next)).next;
            free(ptr);
            break;
        }
        head = head->next;
        i++;
    }
    

}

void printLinkedList(struct Node* node){
    printf("Printing Linked List!\n{");
    while (node != NULL)
    {
        printf("%d, ", node->data);
        node = node->next;
    }
    printf("\b\b}\n");
}