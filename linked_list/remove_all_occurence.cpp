#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};

void displayLL(ListNode *head);
ListNode* remove(ListNode *head, int value);

int main()
{
    ListNode *n5 = new ListNode;
    ListNode *n4 = new ListNode;
    ListNode *n3 = new ListNode;
    ListNode *n2 = new ListNode;
    ListNode *n1 = new ListNode;
    ListNode *n0 = new ListNode;

    n0->val = 1;
    n0->next = n1;

    n1->val = 1;
    n1->next = n2;

    n2->val = 1;
    n2->next = n3;

    n3->val = 1;
    n3->next = n4;

    n4->val = 1;
    n4->next = n5;

    n5->val = 1;
    n5->next = nullptr;

    displayLL(n0);
    n0 = remove(n0, 1);
    displayLL(n0);
    return 0;
}

void displayLL(ListNode *head)
{
    int count = 0;
    if (head == NULL)
    {
        cout << "{}" << endl;
        return;
    }

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

ListNode* remove(ListNode *head, int value)
{
    ListNode *slow = head;
    ListNode *fast = head;

    while (fast != nullptr)
    {
        if(head->val == value){
            slow = slow->next;
            fast = fast->next;
            delete head;
            head= fast;
            continue;
        }
        if (fast->val == value && slow->next == fast)
        {
            slow->next = fast->next;
            delete fast;
            fast = slow;
        }
        // cout <<" fast->val: " << fast->val <<" slow->val: " << slow->val << endl;

        if (fast->val != value){
            fast = fast->next;
        }else{
            slow = slow->next;
        }
    }
    return head;
}
