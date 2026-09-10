#include <iostream>
using namespace std;


struct ListNode{
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {};
    ListNode(int x): val(x), next(nullptr) {};
    ListNode(int x, ListNode* nxt): val(x), next(nxt) {};
};

void displayLL(ListNode* head);
void max_and_min(ListNode* n);

int main(){
    ListNode* n0 = new ListNode;
    ListNode* n1 = new ListNode;
    ListNode* n2 = new ListNode;
    ListNode* n3 = new ListNode;
    ListNode* n4 = new ListNode;
    ListNode* n5 = new ListNode;

    n0->val = 31;
    n0->next = n1;

    n1->val = 3;
    n1->next = n2;

    n2->val = 4;
    n2->next = n3;

    n3->val = 99;
    n3->next = n4;

    n4->val = 1;
    n4->next = n5;

    n5->val = 1;
    n5->next = nullptr;

    displayLL(n0);
    max_and_min(NULL);
    max_and_min(n0);
    return 0;
}

void displayLL(ListNode* head){
    cout << "{";
    while (head != NULL)
    {
        cout << head->val << ", ";
        head = head->next;
    }
    cout << "\b\b}" << endl;    
}


void max_and_min(ListNode* n){
    if (n==nullptr)
    {
        cout << "Your Linked List is empty" << endl;
        return;
    }
    
    int max = n->val;
    int min = n->val;

    while (n != nullptr)
    {
        if (n->val > max)
        {
            max = n->val;
        }else if(n->val < min){
            min = n->val;
        }
        n = n->next;
    }
    cout << "Minimum value in your entire linked list is " << min << endl;
    cout << "Maximum value in your entire linked list is " << max << endl;
}