#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int top;
    unsigned int capacity;
    int* array;
} Stack;

#include "stack.h"

#define TRUE    0
#define FALSE   1

// Side-Effect: 0 cannot be inserted into the stack

int main(){

    Stack* stack = createStack(2);

    pushToStack(stack, 30);
    pushToStack(stack, 40);

    int return_code = pushToStack(stack, 60);
    return_code ? printf("Cannot push to stack\n") : printf("Pushed to Stack\n");
    // Cannot push to stack since the limit is 2.

    printf("Top element popped, top was: %d \n", popStack(stack));
    printf("Top element peeked, top is: %d \n", peekStack(stack));

    resizeStack(stack, 3) ? printf("Cannot resize stack. \n") : printf("Successfully resized stack.\n"); 

    pushToStack(stack, 90) ? printf("Cannot push to realloc'd stack\n") : printf("Pushed to realloc'd Stack\n");
    printf("Top element peeked, top is: %d \n", peekStack(stack));

    destroyStack(stack);

    return 0;
}

// Create Stack
Stack* createStack(unsigned int capacity){
    Stack* st = (Stack *) malloc(sizeof(Stack));
    st->capacity = capacity;
    st->top = -1;                 // No elements yet -> top is -1
    st->array = (int *) malloc(capacity * sizeof(int));

    return st;
}

// Destroy Stack - Free allocated memory
void destroyStack(Stack *st){
    free(st->array);
    free(st);
}

// Re-allocate Stack
int resizeStack(Stack* st, unsigned int new_capacity){

    if(st->top >= new_capacity)
        return FALSE;           // Already have more items than the required new capacity

    st->array = (int *) realloc(st->array, new_capacity * sizeof(int));
    st->capacity = new_capacity;

    return TRUE;
}

int isStackFull(Stack* st){
    return st->top == st->capacity - 1;
}

int isStackEmpty(Stack* st){
    return st->top == -1;
}

int pushToStack(Stack* st, int item){
    if(isStackFull(st))
        return FALSE;
    else{
        st->array[++(st->top)] = item;  // Add to st->top and add item to the next
        return TRUE;
    }
}

int popStack(Stack* st){
    if(isStackEmpty(st))
        return FALSE;
    else
        return st->array[(st->top)--]; // Get st->top and minus it
}

int peekStack(Stack* st){
    if(isStackEmpty(st))
        return FALSE;
    else
        return st->array[st->top];
}
