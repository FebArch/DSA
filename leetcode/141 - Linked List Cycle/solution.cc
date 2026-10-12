#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct ListNode
{
    int data;
    ListNode *next;
};

class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (fast == slow)
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    ListNode *n0 = new ListNode;
    ListNode *n1 = new ListNode;
    ListNode *n2 = new ListNode;
    ListNode *n3 = new ListNode;
    ListNode *n4 = new ListNode;
    ListNode *n5 = new ListNode;
    ListNode *n6 = new ListNode;

    n0->data = 31;
    n0->next = n1;

    n1->data = 45;
    n1->next = n2;

    n2->data = 41;
    n2->next = n3;

    n3->data = 11;
    n3->next = n4;

    n4->data = 32;
    n4->next = n5;

    n5->data = 4;
    n5->next = n0;

    Solution s;
    cout << boolalpha;
    cout << s.hasCycle(n0);

    return 0;
}
