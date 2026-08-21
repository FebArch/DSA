#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head==NULL)
        {
            return head;
        }
        
        ListNode* p = head;
        ListNode* q = head->next;

        while (q != NULL)
        {
            ListNode* temp = p;
            p=q;
            q=q->next;
            p->next = temp;

        }
        head->next = NULL;
        return p;
    }
};

void displayLL(ListNode* n);

int main(){
    ListNode* n0 = (ListNode*) malloc(sizeof(ListNode));
    ListNode* n1 = (ListNode*) malloc(sizeof(ListNode));
    ListNode* n2 = (ListNode*) malloc(sizeof(ListNode));
    ListNode* n3 = (ListNode*) malloc(sizeof(ListNode));

    n0->val = 7;
    n0->next = n1;

    n1->val = 11;
    n1->next = n2;

    n2->val = 24;
    n2->next = n3;

    n3->val = 43;
    n3->next = NULL;

    displayLL(n0);
    Solution s;
    n0 = s.reverseList(n0);
    displayLL(n0);
    return 0;
}



void displayLL(ListNode* n){
    cout << "{";
    while (n!=NULL)
    {
        cout << (n->val) << ", ";
        n = n->next;
    }
    cout << "\b\b}\n" << endl; 
}


