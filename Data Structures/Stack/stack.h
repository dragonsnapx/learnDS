#ifndef __STACK_H_
#define __STACK_H_
#define STACK_SIZE 10

typedef struct {
    int items[STACK_SIZE];   // Stack itself
    int top;                 // Top element of stack, -1 if stack is empty
} Stack;

void createEmptyStack(Stack* st);
int isStackFull(Stack* st);
int isStackEmpty(Stack* st);
void push(Stack *st, int new_item);
void printStack(Stack *st);

#endif