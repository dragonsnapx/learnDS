# Stacks

Stacks are a type of data structures that utilize the **LIFO** principle - Last In First Out.
The top element of the stack is the only accessible element, with these methods:

- Push: Add element to the top of stack
- Pop: Remove element from the top of stack
- isEmpty: Check if stack is empty
- isFull: Check if stack is full
- Peek: Get top element

My implementation had some additional methods:
- destroyStack: calls `free()` on `malloc()`'d stack
- resizeStack: Increases/Decreases the capacity of the stack.

Uses of the stack include:
- **Memory**: Stack-based memory
- Expression Evaluation: Parsers, Linters, etc.