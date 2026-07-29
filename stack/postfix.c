#include <stdio.h>
#include <stdlib.h>

struct precedence
{
    char c;
    int priority;
};

struct stack
{
    int size;
    int top;
    struct precedence *arr;
};

char push(struct stack *s1, struct precedence o, char c)
{
    if (s1->top == -1)
    {
        s1->top++;
        s1->arr[s1->top] = o;
        return 0;
    }
    else if (s1->arr[s1->top].priority > o.priority)
    {
        char cToReturn = s1->arr[s1->top].c;
        s1->arr[s1->top] = o;
        // printf(">> %c", cToReturn);
        return cToReturn;
    }else if(s1->arr[s1->top].priority < o.priority){
        s1->top++;
        s1->arr[s1->top] = o;
        return 0;
    }
}

int main()
{

    struct precedence div = {
        .c = '/',
        .priority = 2};

    struct precedence mul = {
        .c = '*',
        .priority = 2};

    struct precedence sub = {
        .c = '-',
        .priority = 1};

    struct precedence add = {
        .c = '+',
        .priority = 1};

    struct stack operatorsStack;
    operatorsStack.size = 5;
    operatorsStack.top = -1;
    operatorsStack.arr = (struct precedence *)malloc(sizeof(struct precedence) * operatorsStack.size);

    char *postfix = (char*) malloc(sizeof(char) * 30);

    char *exp = "x*y-z/k";
    printf("%s\n", exp);


    while (*exp != '\0')
    {
        char v;
        if (*exp == div.c)
        {
            v = push(&operatorsStack, div, *exp); // char || 0
            if (v)
            {
                *postfix = v;
            }
        }
        else if (*exp == mul.c)
        {
            v = push(&operatorsStack, mul, *exp); // char || 0
            if (v)
            {
                *postfix = v;
            }
        }
        else if (*exp == sub.c)
        {
            v = push(&operatorsStack, sub, *exp); // char || 0
            if (v)
            {
                *postfix = v;
            }
        }
        else if (*exp == add.c)
        {
            v = push(&operatorsStack, add, *exp); // char || 0
            if (v)
            {
                *postfix = v;
            }
        }
        else
        {
            *postfix = *exp;
        }
        v = 0;
        postfix++;
        exp++;
    }

    printf(">>%s\n", postfix);

    
    return 0;
}