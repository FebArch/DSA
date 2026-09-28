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
ListNode* reverse(ListNode* node);

int main() {
    ListNode* n5 = new ListNode(1, nullptr);
    ListNode* n4 = new ListNode(9, n5);
    ListNode* n3 = new ListNode(7, n4);
    ListNode* n2 = new ListNode(43, n3);
    ListNode* n1 = new ListNode(23, n2);
    ListNode* n0 = new ListNode(11, n1);

    displayLL(n0);
    n0 = reverse(n0);
    displayLL(n0);

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

ListNode* reverse(ListNode* node){
    if (node == nullptr || node->next == nullptr)
    {
        return node;
    }
    
    ListNode* currentNode = node;
    ListNode* nextNode = node->next;
    
    ListNode* newHead = reverse(nextNode);

    nextNode->next = currentNode;
    currentNode->next = nullptr;
    return newHead;
}
