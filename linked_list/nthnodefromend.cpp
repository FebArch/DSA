#include <iostream>
using namespace std;

struct ListNode{
    int value;
    ListNode* next;

    ListNode(): value(0), next(nullptr) {};
    ListNode(int val): value(val), next(nullptr) {};
    ListNode(int val, ListNode* nxt): value(val), next(nxt) {};
};

void displayLL(ListNode* head);
void nthNodefromEnd(ListNode* n);


int main(){
    ListNode* n0 = new ListNode;
    ListNode* n1 = new ListNode;
    ListNode* n2 = new ListNode;
    ListNode* n3 = new ListNode;

    n0->value = 31;
    n0->next = n1;

    n1->value = 3;
    n1->next = n2;

    n2->value = 4;
    n2->next = n3;

    n3->value = 11;
    n3->next = nullptr;

    displayLL(n0);
    nthNodefromEnd(n0);
    return 0;
}

void displayLL(ListNode* head){
    cout << "{";
    while (head != NULL)
    {
        cout << head->value << ", ";
        head = head->next;
    }
    cout << "\b\b}" << endl;    
}


void nthNodefromEnd(ListNode* n){
    int k;
    cout << "Enter the value to peek from end: ";
    cin >> k; 
    
    ListNode* p = n;
    ListNode* q = n;

    while (q != nullptr)
    {
        if (k!=0)
        {
            q = q->next;
            k--;
            continue;
        }
        p = p->next;
        q = q->next;
    }
    
    cout << "Nth Element from Last is " << p->value << endl;
}

