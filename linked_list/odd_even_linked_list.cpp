#include<iostream>
#include<vector>
#include<string>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode* oddPtr = head;
        ListNode* oddHead = head;
        ListNode* evenHead = head->next;
        ListNode* evenPtr = head->next;
        
        ListNode *oddtempNode, *eventempNode;

        while (oddPtr->next!=nullptr || evenPtr->next != nullptr)
        {
            if (oddPtr->next && oddPtr->next->next == nullptr){
                oddPtr->next = nullptr; 
            }
            else if (evenPtr->next && evenPtr->next->next == nullptr){
                evenPtr->next = nullptr;
            }
            

            if (oddPtr->next != nullptr && oddPtr->next->next != nullptr){
                oddtempNode = oddPtr;
                oddPtr = oddPtr->next->next;
                oddtempNode->next = oddPtr;
            }
            else if (evenPtr->next != nullptr && evenPtr->next->next != nullptr){
                eventempNode = evenPtr;
                evenPtr = evenPtr->next->next;
                eventempNode->next = evenPtr;
            }            
        }
        
        oddPtr->next = evenHead; 
        return oddHead;
    }
};

void displayLL(ListNode* head);

int main() {
    ListNode* n0 = new ListNode;
    ListNode* n1 = new ListNode;
    ListNode* n2 = new ListNode;
    ListNode* n3 = new ListNode;

    n0->val = 31;
    n0->next = n1;

    n1->val = 3;
    n1->next = n2;

    n2->val = 4;
    n2->next = n3;

    n3->val = 11;
    n3->next = nullptr;
    
    displayLL(n0);
    Solution s;
    n0 = s.oddEvenList(n0);
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

