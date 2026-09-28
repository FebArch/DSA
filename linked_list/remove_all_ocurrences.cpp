#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct ListNode
{
    int data;
    ListNode *next;

    ListNode() : data(0), next(nullptr) {};
    ListNode(int x) : data(x), next(nullptr) {};
    ListNode(int x, ListNode *nxt) : data(x), next(nxt) {};
};

void displayLL(ListNode *head);
ListNode *removeOccurence(ListNode *head, int k);

int main()
{
    ListNode *n5 = new ListNode(2, nullptr);
    ListNode *n4 = new ListNode(4, n5);
    ListNode *n3 = new ListNode(2, n4);
    ListNode *n2 = new ListNode(3, n3);
    ListNode *n1 = new ListNode(2, n2);
    ListNode *n0 = new ListNode(2, n1);

    displayLL(n0);
    n0 = removeOccurence(n0, 2);
    displayLL(n0);
    return 0;
}

void displayLL(ListNode *head)
{
    cout << "{";
    while (head != NULL)
    {
        cout << head->data << ", ";
        head = head->next;
    }
    cout << "\b\b}" << endl;
}

ListNode *removeOccurence(ListNode *head, int k)
{
    ListNode *p = head;
    ListNode *q = head;

    while (p != nullptr)
    {
        if (p!=q && p->data == k)
        {
            ListNode *temp = p;
            p = p->next;
            q->next = p;
            q = q->next;
            delete temp;
            continue;
        }
        else if (p == q && p->data == k)
        {
            ListNode *temp1 = p;

            p = p->next;
            q = q->next;

            delete temp1;
        }
        else if (p == q && p->data != k)
        {
            p = p->next;
        }
    }

    return head;
}
