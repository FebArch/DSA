#include<iostream>
#include<vector>
#include<string>

using namespace std;

struct ListNode{
    int val;
    ListNode* next;

    ListNode(): val(0), next(nullptr) {};
    ListNode(int x): val(x), next(nullptr) {};
    ListNode(int x, ListNode* nxt): val(x), next(nxt) {};
};

void displayLL(ListNode *head);
int cycleValue(ListNode* node);

int main() {
    ListNode* n7 = new ListNode;
    ListNode* n6 = new ListNode;
    ListNode* n5 = new ListNode;
    ListNode* n4 = new ListNode;
    ListNode* n3 = new ListNode;
    ListNode* n2 = new ListNode;
    ListNode* n1 = new ListNode;

    n1->val = 1;
    n1->next = n2;

    n2->val = 2;
    n2->next = n3;

    n3->val = 3;
    n3->next = n4;

    n4->val = 4;
    n4->next = n5;

    n5->val = 5;
    n5->next = n6;

    n6->val = 6;
    n6->next = n7;

    n7->val = 7;
    n7->next = n3;

    int result = cycleValue(n1);
    cout << "Cycled Value: " << result;
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

int cycleValue(ListNode* head){
    ListNode* slow = head;
    ListNode* fast = head;
    bool twoStep = true, firstCatchDone=false;

    while (fast!=nullptr && fast->next != nullptr)
    {
        fast = (twoStep) ? fast->next->next : fast->next;
        slow = slow->next;

        if (fast==slow && !firstCatchDone)
        {
            twoStep = false;
            firstCatchDone = true;
            slow = head;            
        }else if(fast==slow && firstCatchDone){
            return slow->val;
        }
        
    }

    return -1;
}
