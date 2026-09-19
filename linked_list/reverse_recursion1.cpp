#include <iostream>
using namespace std;

struct ListNode
{
    int data;
    ListNode* next;

    ListNode(): data(0), next(nullptr) {};
    ListNode(int x): data(x), next(nullptr) {};
    ListNode(int x, ListNode* nxt): data(x), next(nxt) {};
};

void printList(struct ListNode *head);
ListNode* reverseLinkedList(ListNode* head);

int main(){
    ListNode* n5 = new ListNode(4, nullptr);
    ListNode* n4 = new ListNode(45, nullptr);
    ListNode* n3 = new ListNode(4, n4);
    ListNode* n2 = new ListNode(3, n3);
    ListNode* n1 = new ListNode(2, n2);
    ListNode* n0 = new ListNode(1, n1);

    printList(n0);
    n0 = reverseLinkedList(n0);
    printList(n0);
    return 0;
}

void printList(struct ListNode *head){
    ListNode* ptr=head;
    cout << "{"; 
    while (ptr != nullptr)
    {
        printf("%d, ", ptr->data);
        ptr = ptr->next;
    };
    cout << "\b\b}" << endl;
}

ListNode* reverseLinkedList(ListNode* node){
    if (node->next == nullptr || node==nullptr)
    {
        return node;
    }
    
    ListNode* nextPtr = node->next;
    ListNode* newHead = reverseLinkedList(nextPtr);

    nextPtr->next = node;
    node->next = nullptr;

    return newHead;
}
