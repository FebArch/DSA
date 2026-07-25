#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
}; 

void appendLinkedList(struct Node* node, int element);
void displayLinkedList(struct Node* head);
// void reverseLL(struct Node* head);
struct Node* reverseLL(struct Node* head);

int main(){
    struct Node* head = (struct Node *) malloc(sizeof(struct Node));
    head->data = 9;
    head->next = NULL;

    appendLinkedList(head, 10);
    appendLinkedList(head, 40);
    appendLinkedList(head, 67);
    appendLinkedList(head, 83);
    displayLinkedList(head);
    cout<< "reversing the linked list\n";
    head = reverseLL(head);
    displayLinkedList(head);

    return 0;
}


void appendLinkedList(Node* node, int element){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = element;

    while (node != NULL)
    {
        if (node->next == NULL)
        {
            node->next = newNode;
            newNode->next = NULL;
            node = (node->next)->next;
            continue;
        }
        node = node->next;
    }
}


void displayLinkedList(Node* head){
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
    
}


struct Node* reverseLL(struct Node* head){
    struct Node* prev = head;
    struct Node* current = head->next;
    struct Node* temp;
    
    
    while (current != NULL)
    {
        // cout << prev->data << " >>\n";
        temp = prev;
        prev = current;
        current = current->next;
        prev->next = temp;
    }
    head->next = NULL;
    return prev;
}
