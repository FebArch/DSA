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
ListNode* reverseList(ListNode* node, ListNode* nextPtr);


int main(){
    ListNode* n5 = new ListNode(4, nullptr);
    ListNode* n4 = new ListNode(11, n5);
    ListNode* n3 = new ListNode(34, n4);
    ListNode* n2 = new ListNode(23, n3);
    ListNode* n1 = new ListNode(7, n2);
    ListNode* n0 = new ListNode(3, n1);

    printList(n0);
    n0 = reverseList(n0, n1);
    printList(n0);
    return 0;
}

void printList(struct ListNode *head){
    struct ListNode* ptr=head;
    cout << "{"; 
    while (ptr != nullptr)
    {
        printf("%d, ", ptr->val);
        ptr = ptr->next;
    };
    cout << "\b\b}" << endl;
}

// 3, 7, 23, 34, 11, 4

ListNode* reverseList(ListNode* currentPtr, ListNode* nextPtr){
    if (nextPtr->next == NULL)
    {
        return nextPtr;
    }
    (reverseList(currentPtr->next, nextPtr->next))->next = nextPtr;
    return nextPtr;
}
