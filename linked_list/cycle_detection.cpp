#include <iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;

    ListNode(): val(0), next(nullptr) {};
    ListNode(int x): val(x), next(nullptr) {};
    ListNode(int x, ListNode* nxt): val(x), next(nxt) {};
};

void displayLL(ListNode *head);
bool detectCycle(ListNode* node);

int main(){
    ListNode* n5 = new ListNode;
    ListNode* n4 = new ListNode;
    ListNode* n3 = new ListNode;
    ListNode* n2 = new ListNode;
    ListNode* n1 = new ListNode;
    ListNode* n0 = new ListNode;

    n0->val = 12;
    n0->next = n1;

    n1->val = 2;
    n1->next = n2;

    n2->val = 23;
    n2->next = n3;

    n3->val = 7;
    n3->next = n4;

    n4->val = 34;
    n4->next = n5;

    n5->val = 91;
    n5->next = n0;

    displayLL(n0);
    bool result = detectCycle(n0);

    if (result)
    {
        cout << "Linked List is a cycle" << endl;
    }else{
        cout << "Linked List is not cyclic" << endl;
    }
    
    return 0;
}


void displayLL(ListNode *head)
{
    int count = 0;
    cout << "{";
    while (head != NULL)
    {
        cout << head->val << ", ";
        head = head->next;
        count++;
        if (count == 10)
        {
            break;
        }
        
    }
    cout << "\b\b}" << endl;
}

bool detectCycle(ListNode* node){
    ListNode* p = node;
    if (p==nullptr || p->next == nullptr)
    {
        return false;
    }
    
    ListNode* q = node->next;

    while (q != nullptr && q->next != nullptr)
    {

        q = q->next->next;
        if (p == q) return true;

        p = p->next;
        if (p==q) return true;        
    }
    return false;
}



