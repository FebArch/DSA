// Bubble sort

#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {};
    ListNode(int x) : val(x), next(nullptr) {};
    ListNode(int x, ListNode *nxt) : val(x), next(nxt) {};
};

void displayLL(ListNode *head);
void sortLinkedList(ListNode *head);

int main()
{
    ListNode *n4 = new ListNode(1, nullptr);
    ListNode *n3 = new ListNode(2, n4);
    ListNode *n2 = new ListNode(4, n3);
    ListNode *n1 = new ListNode(4, n2);
    ListNode *n0 = new ListNode(5, n1);

    displayLL(n0);
    sortLinkedList(n0);
    displayLL(n0);
    return 0;
}

void displayLL(ListNode *head)
{
    cout << "{";
    while (head != NULL)
    {
        cout << head->val << ", ";
        head = head->next;
    }
    cout << "\b\b}" << endl;
}

void sortLinkedList(ListNode *head)
{
    ListNode *current = head;
    ListNode *nxt = head->next;
    bool passthrough = true;

    while (passthrough)
    {
        passthrough = false;
        while (nxt != nullptr)
        {
            if (current->val > nxt->val)
            {
                int temp = current->val;
                current->val = nxt->val;
                nxt->val = temp;
                
                passthrough = true;
            }
            nxt = nxt->next;
            current = current->next;
        }
        current = head;
        nxt = head->next;
    }
}
