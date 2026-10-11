#include<iostream>
#include<vector>
#include<string>

using namespace std;

struct ListNode{
    int value;
    ListNode* next;
};

void displayLL(ListNode* head);
ListNode* nthnodefromend(ListNode* node, int k);

int main() {
    ListNode* n0 = new ListNode;
    ListNode* n1 = new ListNode;
    ListNode* n2 = new ListNode;
    ListNode* n3 = new ListNode;
    ListNode* n4 = new ListNode;
    ListNode* n5 = new ListNode;
    ListNode* n6 = new ListNode;

    n0->value = 31;
    n0->next = nullptr;

    n1->value = 45;
    n1->next = n2;

    n2->value = 41;
    n2->next = n3;

    n3->value = 11;
    n3->next = n4;

    n4->value = 32;
    n4->next = n5;

    n5->value = 4;
    n5->next = nullptr;

    displayLL(n0);
    n0 = nthnodefromend(n0, 2);
    displayLL(n0);
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


ListNode* nthnodefromend(ListNode* node, int k){
    if (node == nullptr)
    {
        return node;
    }
    
    ListNode* fast = node;
    ListNode* slow = node;

    while (fast->next!=nullptr)
    {
        if (k>0)
        { // Only 1st pointer will move k times then both pointers will move together
            fast = fast->next;
            k--;
            continue;
        }
        fast = fast->next;
        slow = slow->next;
    }
    
    if(k==1){
        fast = slow->next;
        delete slow;
        return fast;
    }

    if (k>1)
    {
        cout << "INVALID INDEX" << endl;
        return node;
    }
    

    fast = slow->next;
    slow->next = fast->next;
    int deletedVal = fast->value;
    delete fast;
    
    return node;
}