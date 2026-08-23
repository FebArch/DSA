#include <iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode() : val(0), next(NULL) {}
    ListNode(int x): val(x), next(NULL) {}
    ListNode(int x, ListNode* next): val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head == NULL)
        {
            return head;
        }else if(head->next == NULL){
            delete head;
            return NULL;
        }
        
        ListNode* p = head;
        ListNode* q = head;
        ListNode* r;

        while (q->next != NULL)
        {
            if (q->next->next == NULL)
            {
                q = q->next;
            }else{
                q = q->next->next;
            }
            r = p;
            p = p->next;            
        }
        
        r->next = p->next;
        delete p;
        return head;
    }
};

void displayLL(ListNode* head){
    cout << "{";
    while (head != NULL)
    {
        cout << head->val << ", ";
        head = head->next;
    }
    cout << "\b\b}" << endl;    
}

int main(){
    ListNode* n3 = (ListNode*) malloc(sizeof(ListNode));
    ListNode* n2 = (ListNode*) malloc(sizeof(ListNode));
    ListNode* n1 = (ListNode*) malloc(sizeof(ListNode));
    ListNode* n0 = (ListNode*) malloc(sizeof(ListNode));

    n0->val = 7;
    n0->next = NULL;

    n1->val = 11;
    n1->next = n2;

    n2->val = 23;
    n2->next = NULL;

    n3->val = 34;
    n3->next = NULL;

    displayLL(n0);

    Solution s;
    n0 = s.deleteMiddle(n0);
    
    displayLL(n0);


    return 0;
}