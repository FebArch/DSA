#include <iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {} 
};

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (head==NULL || head->next == NULL || head->next->next==NULL)
        {
            return head;
        }

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenHead = even;
        ListNode* p = head->next->next;
        
        int n=1;

        while (p != NULL)
        {
            if (n%2==0)
            {
                even->next = p;
                even = even->next;
            }else{
                odd->next = p;
                odd = odd->next;
            }
            n++;
            p = p->next;
        }
        odd->next = evenHead;
        even->next = NULL;
        
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
    ListNode* n6 = (ListNode*) malloc(sizeof(ListNode));
    ListNode* n5 = (ListNode*) malloc(sizeof(ListNode));
    ListNode* n4 = (ListNode*) malloc(sizeof(ListNode));
    ListNode* n3 = (ListNode*) malloc(sizeof(ListNode));
    ListNode* n2 = (ListNode*) malloc(sizeof(ListNode));
    ListNode* n1 = (ListNode*) malloc(sizeof(ListNode));
    ListNode* n0 = (ListNode*) malloc(sizeof(ListNode));

    n0->val = 2;
    n0->next = n1;

    n1->val = 1;
    n1->next = NULL;

    n2->val = 3;
    n2->next = n3;

    n3->val = 5;
    n3->next = n4;

    n4->val = 6;
    n4->next = n5;

    n5->val = 4;
    n5->next = n6;

    n6->val = 7;
    n6->next = NULL;

    displayLL(n0);
    
    Solution s;
    n0 = s.oddEvenList(n0);
    cout << "After Fnction call" << endl;
    displayLL(n0);

    return 0;
}