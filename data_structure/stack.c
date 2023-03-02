#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    /* data */
    int top;
    unsigned capacity;
    int* array;  
};

struct Stack* create_stack(unsigned capacity)
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}

int is_full(struct Stack* stack)
{
    return stack->top == stack->capacity-1;
}

int is_empty(struct Stack* stack)
{
    return stack->top == -1;
}

void push(struct Stack* stack,int item)
{
    if (is_full(stack))
    {
        printf("stack is full \r\n");
        return;
    }
    stack->array[++stack->top] = item;
    printf("%d pushed to stack \r\n", item);
}

int pop(struct Stack* stack)
{
    if (is_empty(stack))
        return INT_MIN;
    return stack->array[stack->top--];
}

int peak(struct Stack* stack)
{
    if (is_empty(stack))
        return INT_MIN;
    return stack->array[stack->top];
}

int main()
{
    struct Stack* stack = create_stack(5);
    push(stack,1);
    push(stack,2);
    push(stack,3);
    push(stack,4);
    push(stack,5);
    push(stack,6);
}