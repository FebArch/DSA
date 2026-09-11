#include <iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;

    ListNode(): val(0), next(nullptr) {};
    ListNode(int x): val(x), next(nullptr) {};
    ListNode(int x, ListNode* nxt): val(x), next(nxt) {};
};

void displayLL(ListNode* head);
ListNode* deleteNodeByValue(ListNode* n, int value);

int main(){
    ListNode* n4 = new ListNode(11, nullptr);
    ListNode* n3 = new ListNode(34, n4);
    ListNode* n2 = new ListNode(23, n3);
    ListNode* n1 = new ListNode(7, n2);
    ListNode* n0 = new ListNode(3, n1);

    displayLL(n0);
    n0 = deleteNodeByValue(n0, 50);
    // n0 = deleteNodeByValue(n0,11);
    displayLL(n0);
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

ListNode* deleteNodeByValue(ListNode* n, int value){
        
    ListNode* p = n;
    ListNode* q = n;

    if (n->val == value)
    {
        p =  n->next;   
        delete n;
        return p;
    }

    while (p != nullptr)
    {
        if (p->val == value)
        {
            q->next = p->next;
            delete p;
            return n;
        }
        q = p;
        p = p->next;
    }
    cout << "Value " << value << " not found in linked list" << endl; 
    return n;
}

