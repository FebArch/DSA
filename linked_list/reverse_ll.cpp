#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void addElement(struct Node *node, int element);
void displayList(struct Node *head);
struct Node *reverse(struct Node *head);

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = NULL;

    addElement(head, 20);
    addElement(head, 30);
    addElement(head, 40);
    addElement(head, 50);
    // addElement(head, 60);

    displayList(head);
    cout << "reversing...\n";
    head = reverse(head);
    displayList(head);

    return 0;
}

void addElement(struct Node *node, int element){

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = element;

    while (node != NULL)
    {
        if (node->next == NULL)
        {
            node->next = newNode;
            newNode->next = NULL;
            // cout << element << " inserted!\n";
            node = (node->next)->next;
            continue;
        }
        node = node->next;
    }
    return;
}

void displayList(struct Node *head)
{
    struct Node *ptr = head;
    if (head == NULL)
    {
        cout << "Head is NULL\n";
        ptr->data = 0;
        ptr->next = NULL;
        return;
    }

    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
    return;
}

struct Node *reverse(struct Node *head)
{
    struct Node *current = head;

    if (head == NULL)
    {
        current->data = 0;
        current->next = NULL;
        return current;
    }
    else if (head->next == NULL)
    {
        return head;
    }

    struct Node *nxt = head->next;
    struct Node *prev;

    while (head->next != NULL)
    {
        prev = current;  // 7      11       4
        current = nxt;   // 11     4        2
        nxt = nxt->next; // 4     2       NULL

        current->next = prev; // 11->7    4->11   2->4
        // 2->4->11->7
        // cout << "Value: " << current->data << endl;
        if (nxt == NULL)
        {
            head->next = NULL;
            prev = current;
        }
    }
    return prev;
}
