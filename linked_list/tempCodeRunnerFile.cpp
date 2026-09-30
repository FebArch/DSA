#include<iostream>
#include<vector>
#include<string>

using namespace std;

struct ListNode{
    int val;
    ListNode* next;
};

void displayLL(ListNode *head);
ListNode* insert(ListNode* head, int data, int position);
ListNode* freeUpLinkedList(ListNode* node);

int main() {
    ListNode* n3 = new ListNode;
    ListNode* n2 = new ListNode;
    ListNode* n1 = new ListNode;
    ListNode* n0 = new ListNode;


    n0->val = 10;
    n0->next = n1;

    n1->val = 20;
    n1->next = n2;

    n2->val = 30;
    n2->next = n3;

    n3->val = 40;
    n3->next = nullptr;

    displayLL(n0);
    
    n0 = insert(n0, 50, 4);
    displayLL(n0);

    freeUpLinkedList(n0);

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


ListNode* insert(ListNode* head, int value, int position){
    if (position < -1)
    {
        cout << "Invalid Position" << endl;
        return head;
    }
    
    ListNode*  slow = head;
    ListNode* fast = head;
    
    // creating the node
    ListNode* newNode = new ListNode;
    newNode->val = value;
    newNode->next = nullptr;

    if(head == NULL && position == 0)    return newNode;   

    while(fast!=nullptr){
        fast = fast->next;
        position--;
        if(position == -1){
            newNode->next = head;
            return newNode;
        }
        else if(position == 0){
            slow->next = newNode;
            newNode->next = fast;
            return head;
        }
        slow = fast;
    }

    delete newNode;
    cout << "Invalid Position" << endl;
    return head;
}

ListNode* freeUpLinkedList(ListNode* node){
    if (node->next == nullptr)
    {
        return node;
    }
    
    delete freeUpLinkedList(node->next);
}