#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100

typedef struct {
    int arr[STACK_SIZE];
    int top;
}Stack;

// Initializes stack
void initStack(Stack *st) {
    st->top = -1;
}

// Checks if stack is full
int isFull(Stack *st) {
    return st->top == STACK_SIZE - 1;
}

// Checks if stack is empty
int isEmpty(Stack *st) {
    if(st->top == -1)
        return false;
    else
        return true;
}

// Pushes to stack unless full
void push(Stack *st, int val) {
    if(isFull(st))
        printf("Stack is full. Cannot push\n");
    else
        st->arr[++st->top] = val;
}

// Pops from top of stack unless empty
int pop(Stack *st) {
    if(isEmpty(st)) {
        printf("Stack is empty. Cannot pop\n");
        return -1;
    }
    else
        return st->arr[st->top--];
}

// Peeks at top of stack unless empty
int peek(Stack *st) {
    if(isEmpty(st)) {
        printf("Stack is empty. Cannot peek\n");
        return -1;
    }
    else
        return st->arr[st->top];
}