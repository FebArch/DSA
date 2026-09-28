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
ListNode* cycleValue(ListNode* node);

int main() {
    ListNode* n5 = new ListNode(1, nullptr);
    ListNode* n4 = new ListNode(9, n5);
    ListNode* n3 = new ListNode(7, n4);
    ListNode* n2 = new ListNode(43, n3);
    ListNode* n1 = new ListNode(23, n2);
    ListNode* n0 = new ListNode(11, n1);

    displayLL(n0);
    cout << "Cycled Value: " << cycleValue(n0)->val;
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
    ListNode* fast = head->next;

    while (fast!=nullptr && fast->next != nullptr)
    {
        fast = fast->next->next;
        slow = slow->next;
        
        if(fast->next == slow) return fast;


    }
    

}
