#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void addElement(struct Node *head, int element);
void displayList(struct Node* head);

struct Node* reverseList(struct Node *head){
    struct Node *p = head;
    struct Node  *q = head->next;
    struct Node  *temp;

    while (head->next != NULL)
    {
        temp = p;
        p = q;
        q=q->next;
        p->next = temp; 
        if (q==NULL)
        {
            head->next = NULL;
        }
    }
    return p;
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = NULL;

    addElement(head, 11);
    addElement(head, 4);
    addElement(head, 2);

    displayList(head);
    printf("reversing the list\n");
    head = reverseList(head);
    // displayList(result);
    displayList(head);
    return 0;
}

void addElement(struct Node *head, int element)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = element;

    struct Node *ptr = head;
    while (ptr != NULL)
    {
        if((ptr->next)==NULL){
            ptr->next = newNode;
            newNode->next = NULL;
        }
        ptr = ptr->next;
    }
}

void displayList(struct Node* head){
    while (head != NULL)
    {
        printf("%d\n", head->data);
        head = head->next;
    }
    
}