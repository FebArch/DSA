#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int index;
    int *arr;
};

int isStackEmpty(struct stack *s)
{
    if (s->index < 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isStackFull(struct stack *s)
{
    if (s->index == (s->size - 1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{

    struct stack s1 = {
        .size = 10,
        .index = -1,
    };
    s1.arr = malloc(s1.size * sizeof(int));

    if (isStackEmpty(&s1))
    {
        printf("Yes the stack is Empty!\n");
    }
    else
    {
        printf("No the stack is not Empty!\n");
    }
    for (int i = 0; i < s1.size; i++)
    {
        s1.arr[i] = 3 * (i + 1);
        s1.index++;
    }
    if (isStackEmpty(&s1))
    {
        printf("Yes the stack is Empty!\n");
    }
    else
    {
        printf("No the stack is not Empty!\n");
    }

    for (int i = 0; i < s1.size; i++)
    {
        printf("%d, ", s1.arr[i]);
    }
    

    return 0;
}