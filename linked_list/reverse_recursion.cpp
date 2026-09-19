#include <iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;

    ListNode(): val(0), next(nullptr) {}; 
    ListNode(int x): val(x), next(nullptr) {}; 
    ListNode(int x, ListNode* nxt): val(x), next(nxt) {}; 
};

void printList(struct ListNode *head);
ListNode* reverseList(ListNode* prev, ListNode* curr);
ListNode* reverseLinkedList(ListNode* node);

int main(){
    ListNode* n5 = new ListNode(4, nullptr);
    ListNode* n4 = new ListNode(45, nullptr);
    ListNode* n3 = new ListNode(4, n4);
    ListNode* n2 = new ListNode(3, n3);
    ListNode* n1 = new ListNode(2, n2);
    ListNode* n0 = new ListNode(1, n1);

    ListNode* head;

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
        printf("%d, ", ptr->val);
        ptr = ptr->next;
    };
    cout << "\b\b}" << endl;
}

// 3, 7, 23, 34, 11, 4

ListNode* reverseList(ListNode* prev, ListNode* curr){
    if (curr->next == NULL)
    {
        curr->next = prev;
        prev->next = nullptr;
        return curr;
    }
    ListNode* headptr = reverseList(prev->next, curr->next);
    curr->next = prev;
    prev->next = nullptr;
    return headptr;
}

ListNode* reverseLinkedList(ListNode* node){
    if (node->next == nullptr || node == nullptr)
    {
        return node;
    }
    
    ListNode* nextNode = node->next;
    ListNode* headPtr = reverseLinkedList(node->next); //14
    nextNode->next = node;
    node->next = nullptr;
    return headPtr;
}
