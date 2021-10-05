#ifndef __STACK_H_
#define __STACK_H_

Stack* createStack(unsigned int capacity);
void destroyStack(Stack *st);                                   // Unique method for C, variable needs memory allocation
int resizeStack(Stack* st, unsigned int new_capacity);          // Unique method for C, resizing requires memory reallocation

int isStackFull(Stack* st);
int isStackEmpty(Stack* st);
int pushToStack(Stack* st, int item);
int popStack(Stack* st);
int peekStack(Stack* st);

#endif
