#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int length;
    int top;
    int *arr;
};

void setStack(struct stack *s, int n);
int isEmpty(struct stack s);
int stackSpace(struct stack s);

void push(struct stack *s);
int pop(struct stack *s);
void peek(struct stack s);

void printStack(struct stack s);

int main()
{
    struct stack s = {
        .length = 10,
        .top = -1};
    s.arr = (int *)malloc(s.length * sizeof(int));

    // printf("Available space in stack: %d\n", stackSpace(s));
    
    int i = 1;
    while (i)
    {
        printf("Your Stack has %d space\n", stackSpace(s));
        printf("\nSelect the following option for stack operation:\n");
        printf("1. Fill your stack\n2. Push value in stack\n3.Pop value out of stack\n4. Peek in your Stack\n5. Print the stack\n6. Exit the Application\n");

        printf("\n\nEnter command number to perform the operation on your stack:\n");
        int c;
        scanf("%d", &c);

        if (c==1)
        {
            setStack(&s, 5);
        }
        else if(c==2){
            push(&s);
        }
        else if(c==3){
            pop(&s);
        }
        else if(c==4){
            peek(s);
        }
        else if(c==5){
            printStack(s);
        }
        else if(c==6){
            i--;
        }else{
            printf("Invalid Command\n");
        }
        printf("\n\n");
    }
    

    
    return 0;
}

void setStack(struct stack *s, int n)
{
    printf("You have total %d capacity in your stack\n", stackSpace(*s));

    int m;
    printf("Enter the number to store multiplication table of that number in your stack: ");
    scanf("%d", &m);
    if (isEmpty(*s))
    {
        for (int i = 0; i <= n; i++)
        {
            s->arr[i] = (i + 1) * m;
            s->top++;
        }
        return;
    }else if(n < stackSpace(*s)){
        for (int i = 0; i <= n; i++)
        {
            s->arr[i] = (i + 1) * m;
            s->top++;
        }
        return;
    }
    else{
        printf("Sorry your stack is not empty!\n");
        return;
    }
}

int isEmpty(struct stack s)
{
    if (s.top == -1)
    {
        return 1;
    }
    else
    {
        return 1;
    }
}

int stackSpace(struct stack s){
    if (s.top == -1)
    {
        return s.length;
    }
    else if (s.top < s.length)
    {
    printf("top is %d\n", s.top);
        return (s.length - s.top);
    }else{
        return 0;
    }
    
}


void push(struct stack *s){
    int n;
    printf("Enter the value to be push in the stack: ");
    scanf("%d", &n);

    if ((s->top) < (s->length-1))
    {
        s->top++;
        s->arr[s->top] = n;
    }else{
        printf("Sorry your stack is full! Wasn't able to push %d element in your stack\n", n);
    }
}



int pop(struct stack *s){
    int temp = s->arr[s->top];
    s->arr[s->top] = 0;
    s->top--;
    return temp;
}


void peek(struct stack s){
    int n;
    printf("\n\nEnter which number of element you want to peek from top: ");
    scanf("%d", &n);
    if (n>s.top)
    {
        printf("Invalid Element value");
    }{
    int element = s.arr[s.top-n+1];
        printf("Element at %d from top is %d\n", n, element);
    }
    
}



void printStack(struct stack s){
    for (int i = s.top; i >= 0; i--)
    {
        printf("|  %d  |\n", s.arr[i]);
        printf("|------|\n");
    }
}



















