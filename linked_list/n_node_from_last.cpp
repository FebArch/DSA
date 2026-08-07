#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void displayLinkedList(Node *);
void appendElementToLinkedList(Node *);
void freeHeap(Node *n);
int llSize(Node n);
void removeElement(Node *n);

void peek(Node* n);

int mainMenu();

int main()
{
    int start = 0, commands = 0, data, event;

    cout << "Do you want to create your linked list (0/1): ";
    cin >> start;

    Node *n0 = new Node;
    cout << "Enter the first element in your linked list: ";
    cin >> data;

    n0->data = data;
    n0->next = NULL;

    while (start != 0 && start < 2)
    {

        commands = mainMenu();
        switch (commands)
        {
        case 1:
            displayLinkedList(n0);
            break;
        case 2:
            appendElementToLinkedList(n0);
            break;
        case 3:
            cout << "Size of your linked list: " << llSize(*n0) << endl;
            break;
        case 4:
            removeElement(n0);
            break;
        case 5:
            peek(n0);
            break;
        case 6:
            freeHeap(n0);
            cout << "Thank you!\n";
            start += 1;
            break;
        default:
            cout << "Invalid command!\n";
            break;
        }
    }

    return 0;
}

int mainMenu()
{
    int command;
    cout << "\n\nWelcome to Linked List Problem" << endl;
    cout << "1. Display Your Linked List\n";
    cout << "2. Append Element To Your Linked List\n";
    cout << "3. Get Your Linked List Size\n";
    cout << "4. Remove Element from Your Linked List\n";
    cout << "5. Peek Element In Your Linked List\n";
    cout << "6. Exit Application\n";

    cin >> command;
    return command;
}

void displayLinkedList(Node *head)
{
    cout << "{";
    while (head != NULL)
    {
        cout << head->data << ", ";
        head = head->next;
    }
    cout << "\b\b}" << endl;
}

void appendElementToLinkedList(Node *n)
{
    Node *ptr = n;
    int data;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    Node *newNode = new Node;
    ptr->next = newNode;
    ptr = ptr->next;
    cout << "Enter your number to append: ";
    cin >> data;
    ptr->data = data;
    ptr->next = NULL;
}

int llSize(Node n)
{
    int size = 1;
    while (n.next != NULL)
    {
        size++;        // 2 3
        n = *(n.next); // 55  34
    }
    return size;
}

void removeElement(Node *n)
{
    Node *p = n;
    Node *q = n->next;
    int element;
    cout << "Enter the element to remove: ";
    cin >> element;

    // head cannot be removed!
    while (q != NULL)
    {
        if (q->data == element)
        {
            p->next = q->next;
            delete q;
            cout << "Node with " << element << " deleted" << endl;
            return;
        }
        q = q->next;
        p = p->next;
    }
    cout << "Node with " << element << " is not present to remove!" << endl;
    rethrow_exception;
}


void peek(Node* n){
    int llLength = llSize(*n);
    int index;

    displayLinkedList(n);
    cout << "You are peeking in your linked list from last element";
    cout << "Enter the number of element you want to peek in: ";
    cin>>index;

    Node* ptr = n;
    if (index > llLength)
    {
        cout << "Your Peek Index is greater than your Linked List" << endl;
        return;
    }
    

    int realIndex = llLength - index;

    while (realIndex)
    {
        realIndex--;
        ptr = ptr->next;
    }
    cout << "Element at " << index << " from last is " << ptr->data;  
}


void freeHeap(Node *n)
{
    for (int i = 0; i < 4; i++)
    {
        delete n;
        n->next;
    }
}
