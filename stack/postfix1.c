#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
    int top;
    char *arr;
};

void displayStack(struct stack s1)
{
    printf("{");
    for (int i = s1.top; i > -1; i--)
    {
        printf("%c, ", s1.arr[i]);
    }
    printf("\b\b}\n");
}

int isOperand(char c)
{
    char operators[4] = {'+', '-', '*', '/'};
    for (int i = 0; i < 4; i++)
    {
        if (operators[i] == c)
        {
            return 0;
        }
    }
    return 1;
}

int precedence(char c)
{
    if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *s1, char c)
{
    s1->top++;
    s1->arr[s1->top] = c;
    return;
}

char pop(struct stack *s1)
{
    char cReturn = s1->arr[s1->top];
    // s1->arr[s1->top] = '!';
    s1->top--;
    return cReturn;
}

int main()
{

    char *exp = "x-y/z-k*d";
    char *postfix = (char *)malloc(sizeof(char) * strlen(exp));
    int i = 0;
    int j = 0;

    struct stack s1;
    s1.arr = (char *)malloc(10 * sizeof(char));
    s1.top = -1;

    while (exp[j] != '\0')
    {
        // printf("joker %d %d\n", i, j);
        if (isOperand(exp[j]))
        {
            postfix[i] = exp[j];
            j++;
            i++;
        }
        else
        {
            if (precedence(exp[j]) > precedence(s1.arr[s1.top]))
            {
                push(&s1, exp[j]);
                j++;
            }
            else
            {
                postfix[i] = pop(&s1);
                // push(&s1, exp[j]);
                i++;
                // j++;
            }
        }
        // printf("%c\n", postfix[i]);
    }
    // printf("Joer %c\n", s1.arr[0]);
    // printf("Joer %c\n", s1.arr[1]);
    for (int k = s1.top; k >= 0; k--)
    {
        postfix[i] = s1.arr[k];
        i++;
    }

    postfix[i] = '\0';
    // displayStack(s1);
    printf("%s\n", postfix);
    return 0;
}