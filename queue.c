#include <stdio.h>
#include <stdlib.h>
#define Max_SIZE 100
typedef struct{
    int items[Max_SIZE];
    int front;
    int rear;
} IntQueue;
void initializeQueue(IntQueue* queue){
    queue ->front = 0;
    queue->rear = -1;
    }
    
    int isEmpty(IntQueue* queue) {
    return queue-> rear < queue-> front;
    }
    // Function to enqueue an integer into the queue
    void enqueue (IntQueue* queue,
    int value) {
    if (queue->rear == Max_SIZE - 1) {
    printf("Queue overflow!\n");
    return;
    }
    queue->items [++queue-> rear] = value;
    }
    int main() {
    IntQueue queue;
    initializeQueue(&queue);
    enqueue (&queue, 10); 
    enqueue (&queue, 20); 
    enqueue (&queue, 30);
    printf ("Elements of the queue: \n");
    for (int i = queue.front; i <= queue.rear; ++i) {
    printf("%d\n", queue. items [i]);
    }
    printf("Size of the queue: %d\n", queue.rear - queue.front + 1);
    return 0; 

}