#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

void push(struct stack *s, int element);
int pop(struct stack *s);

int isFull(struct stack s);
// int isEmpty(struct stack s);

int main()
{
    struct stack s;
    s.size = 8;
    s.top = -1;
    s.arr = malloc((s.size) * sizeof(int));

    if (s.arr == NULL)
    {
        printf("Failed to allcoate memory in Heap!\n");
        return 1;
    }

    /*
    printf("Before push! %d\n", s.top);
    for (int i = 0; i < 5; i++)
    {
        s.top++;
        s.arr[s.top] = (i + 1) * 5;
        printf(">>%d, \n", s.arr[s.top]);
    }

    push(&s, 41);
    */

    s.top +=1;
    s.arr[s.top] = 11;
    s.top +=1;
    s.arr[s.top] = 3;
    s.top +=1;
    s.arr[s.top] = 88;

    printf("Before pop %d\n", s.top);
    for (int i = 0; i <= s.top; i++)
    {
        printf("%d, \n", s.arr[i]);
    }

    int r = pop(&s);
    printf("Poped element is %d\n", r);

    printf("After pop %d\n", s.top);
    for (int i = 0; i <= s.top; i++)
    {
        printf("%d, \n", s.arr[i]);
    }
    return 0;
}

int isFull(struct stack s)
{
    if (s.top < s.size)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void push(struct stack *s, int element)
{
    if (isFull(*s))
    {
        printf("Stack overflow cannot push more elements!\n");
    }
    else
    {
        s->top++;
        s->arr[s->top] = element;
        printf("Push %d element successfully at index %d\n", element, s->top);
    }
}

int isTotalEmpty(struct stack s)
{
    if (s.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int pop(struct stack *s)
{
    int temp;
    if (isTotalEmpty(*s))
    {
        printf("Nothing to pop the stack is already empty\n");
        temp = -1;
    }
    else
    {
        temp = s->arr[s->top];
        s->top--;
    }
    return temp;
}
