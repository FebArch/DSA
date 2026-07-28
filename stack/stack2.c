#include <stdio.h>
#include <stdlib.h>


struct stack
{
    int size;
    int top;
    int *arr;
};

void displayStack(struct stack s1);
void setTableinStack(struct stack* s1);
int emptyStack(struct stack s1);
int fullStack(struct stack s1);
void push(struct stack *s1);
void pop(struct stack* s1);
void peek(struct stack s1);
void prompts();

int main()
{
    struct stack s1;
    s1.size = 10;
    s1.top = -1;

    s1.arr = (int *) malloc(sizeof(int) * s1.size);

    int i=0;
    while (i<1)
    {
        printf("****************  Stack Operator Application  ****************\n\n");
        displayStack(s1);
        prompts();

        printf("Enter Your Command: ");
        int cmd;
        scanf("%d", &cmd);

        switch (cmd)
        {
        case 1:
            setTableinStack(&s1);
            break;
        case 2:
            peek(s1);
            break;
        case 3:
            push(&s1);
            break;
        case 4:
            pop(&s1);
            break;
        default:
            printf("Invalid Input Command\n");
            i++;
            break;
        }
    }

    return 0;
}

void displayStack(struct stack s1)
{

    if (s1.top == -1)
    {
        printf("|  (void)  |\n");
        return;
    }
    
    for (int i = s1.top; i >=0 ; i--)
    {

        printf("|  %02d  |\n", s1.arr[i]);
        printf("--------\n");
    }
}


void setTableinStack(struct stack* s1){
    int n;
    printf("Enter the number to set table in your stack: ");
    scanf("%d", &n);

    for (int i = 0; i < 10; i++)
    {
        s1->top++;
        s1->arr[s1->top] = n * (i+1);
    }
}


int emptyStack(struct stack s1){
    if (s1.top < 0)
    {
        return 1;
    }else{
        return 0;
    }
}


int fullStack(struct stack s1){
    if (s1.top == (s1.size-1))
    {
        return 1;
    }else{
        return 0;
    }
}


void push(struct stack *s1){
    int element;
    printf("Enter the element to be pushed in your Stack: ");
    scanf("%d", &element);

    if (fullStack(*s1))
    {
        printf("Stack is full cannot insert more elements\n");
        return;
    }else{
        s1->top++;
        s1->arr[s1->top] = element;
        return;
    }    
}

void pop(struct stack* s1){
    if (emptyStack(*s1))
    {
        printf("Stack is already empty! No element present to pop out\n");
        return;
    }else{
        s1->arr[s1->top] = -919221;
        s1->top--;

    }
}

void peek(struct stack s1){
    int n;
    printf("Enter which number of element you want to peek from top: ");
    scanf("%d", &n);

    if (n > s1.top || n == -1)
    {
        printf("Invalid Number to peek!\n\n");
        return;
    }else{
        int ans = s1.arr[s1.top - n+1];
        printf("Value %d step deep inside is %d\n", n, ans);
        return;
    }
}

void prompts(){
    printf("1. Store table in your stack\n");
    printf("2. Peek in your Stack\n");
    printf("3. Push Value in your Stack\n");
    printf("4. Pop Out Value from your stack\n");
    return;
}
























































































































