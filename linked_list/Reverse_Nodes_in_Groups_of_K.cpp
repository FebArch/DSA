#include <iostream>
using namespace std;

void printList(struct ListNode *head);

struct ListNode{
    int val;
    ListNode* next;

    ListNode(): val(0), next(nullptr) {}; 
    ListNode(int x): val(x), next(nullptr) {}; 
    ListNode(int x, ListNode* nxt): val(x), next(nxt) {}; 
};

ListNode* reverseListByK(ListNode head, int k);
ListNode* reverseList(ListNode* head);

int main(){
    ListNode* n5 = new ListNode(4, nullptr);
    ListNode* n4 = new ListNode(11, n5);
    ListNode* n3 = new ListNode(34, n4);
    ListNode* n2 = new ListNode(23, n3);
    ListNode* n1 = new ListNode(7, n2);
    ListNode* n0 = new ListNode(3, n1);

    printList(n0);
    n0 = reverseList(n0);
    printList(n0);
    // reverseListByK()
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


ListNode* reverseListByK(ListNode* head, int k){
    int i = 0;
    ListNode* temp = head;
    ListNode* left = head;
    ListNode* right;
    while (i < k)
    {
        temp = temp->next;
    }
    
}


ListNode* reverseList(ListNode* head){
    ListNode* prev = head;
    ListNode* current = head->next;

    while (current != nullptr)
    {
        ListNode* temp = prev;
        prev = current;
        current = current->next;
        prev->next = temp;
    }
    head->next = nullptr;
    return prev;
}
