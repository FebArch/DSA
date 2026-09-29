#include <iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;

    ListNode(): val(0), next(nullptr) {};
    ListNode(int x): val(x), next(nullptr) {};
    ListNode(int x, ListNode* nxt): val(x), next(nxt) {}
};

void displayLL(ListNode *head);
ListNode* cycleValue(ListNode* head);

int main(){ 
    ListNode* n6 = new ListNode;
    ListNode* n5 = new ListNode;
    ListNode* n4 = new ListNode;
    ListNode* n3 = new ListNode;
    ListNode* n2 = new ListNode;
    ListNode* n1 = new ListNode;
    ListNode* n0 = new ListNode;

    n0->val = 7;
    n0->next = n1;

    n1->val = 21;
    n1->next = n2;

    n2->val = 34;
    n2->next = n3;

    n3->val = 12;
    n3->next = n4;

    n4->val = 6;
    n4->next = n5;
    
    n5->val = 9;
    n5->next = n6;
    
    n6->val = 43;
    n6->next = n5;

    // displayLL(n0);
    cout << "Cycle Value " << cycleValue(n0)->val;


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

ListNode* cycleValue(ListNode* head){
    ListNode* slow = head;
    ListNode* fast = head;
    bool haveMetBefore = false;

    while (fast != nullptr && fast->next != nullptr)
    {
        fast = (!haveMetBefore) ? fast->next->next : fast->next;
        slow = slow->next;

        if (slow == fast && !haveMetBefore)
        {
            haveMetBefore = true;
            slow = head;
        }
        
        if(slow == fast && haveMetBefore){
            return slow;
        }
    }
    
    return new ListNode(-1, nullptr);
}

