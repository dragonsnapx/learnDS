#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct{
    int front;
    int rear;
    int size;
    unsigned int capacity;
    int* array;
} Queue;

int main(){
    Queue * q = (Queue *) malloc(sizeof(Queue));
}

Queue* createQueue(unsigned int capacity){
    Queue * q = (Queue *) malloc(sizeof(Queue));
    q->capacity = capacity;
    q->front = 0;
    q->size = 0;

    q->rear = capacity - 1;
    q->array = (int *) malloc(capacity * sizeof(int));

    return q;
}

bool isQueueFull(Queue* q){
    return q->size == q->capacity;
}

bool isQueueEmpty(Queue *q){
    return q->size == 0;
}

bool enqueue(Queue* q, int item){
    if(isQueueFull(q))
        return false
    
    q->rear = (q->rear + 1) % q->capacity;
}