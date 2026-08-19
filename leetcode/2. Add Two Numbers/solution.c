/**
 * Definition for singly-linked list.
 *
 */
#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    struct ListNode *head = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *ptr = head;

    int carry = 0, answer, value;
    struct ListNode *newNodeNext;
    while (ptr != NULL)
    {        
        if (l1 && l2)
        {
            answer = (l1->val) + (l2->val) + carry;
            l1 = l1->next;
            l2 = l2->next;
        }
        else if (l1 && (l2 == NULL))
        {
            answer = (l1->val) + 0 + carry;
            l1 = l1->next;
        }
        else if ((l1 == NULL) && l2)
        {
            answer = (l2->val) + 0 + carry;
            l2 = l2->next;

        }
        else
        {
            answer = carry;
        }  
        
        carry = 0;
        if (answer > 9)
        {
            carry = 1;
            answer = answer - 10;
        }

        if (l1 == NULL && l2 == NULL && carry==0)
        {
            ptr->val = answer;
            ptr->next = NULL;
            ptr = ptr->next;
        }
        else
        {
            struct ListNode *newNextNode = (struct ListNode *)malloc(sizeof(struct ListNode));
            ptr->val = answer;
            ptr->next = newNextNode;
            ptr = ptr->next;
        }
    }
    return head;
}

int main()
{
    struct ListNode *l10 = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *l11 = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *l12 = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *l13 = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *l14 = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *l15 = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *l16 = (struct ListNode *)malloc(sizeof(struct ListNode));

    struct ListNode *l20 = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *l21 = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *l22 = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *l23 = (struct ListNode *)malloc(sizeof(struct ListNode));

    l10->val = 0;
    l10->next = NULL;

    l11->val = 4;
    l11->next = l12;

    l12->val = 3;
    l12->next = NULL;

    l13->val = 9;
    l13->next = l14;

    l14->val = 9;
    l14->next = l15;

    l15->val = 9;
    l15->next = l16;

    l16->val = 9;
    l16->next = NULL;

    l20->val = 0;
    l20->next = NULL;

    l21->val = 6;
    l21->next = l22;

    l22->val = 4;
    l22->next = NULL;

    l23->val = 9;
    l23->next = NULL;

    struct ListNode *answer = addTwoNumbers(l10, l20);

    printf("Main function printf functions\n");
    int i =0;
    // while (i<3)
    while (answer != NULL)
    {
        printf("%d ", answer->val);
        answer = answer->next;
        i++;
    }

    return 0;
}