#include<iostream>
#include<vector>
#include<string>

using namespace std;


struct ListNode{
    int val;
    ListNode* next;
};

int main() {
    ListNode* n0 = new ListNode;
    
    n0->val = 32;
    n0->next = nullptr;

    cout << n0->val << endl;
    delete n0;
    cout << n0->val << endl;

    return 0;
}

