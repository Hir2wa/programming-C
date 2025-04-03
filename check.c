#include <stdio.h>
#include <stdlib.h>

#define MAX 100  // Maximum stack size

// Stack structure definition
typedef struct {
    int top;
    int data[MAX];
} Stack;

// Function to initialize a stack
void initStack(Stack *s) {
    s->top = -1;
}

// Function to check if a stack is empty
int isEmpty(Stack *s) {
    return s->top == -1;
}

// Function to check if a stack is full
int isFull(Stack *s) {
    return s->top == MAX - 1;
}

// Function to push a value onto the stack
void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack overflow!\n");
        return;
    }
    s->data[++s->top] = value;
}

// Function to pop a value from the stack
int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack underflow!\n");
        return -1; // Return -1 as an error indicator
    }
    return s->data[s->top--];
}

// Function to move the top value from one stack to another
void moveTop(Stack *source, Stack *destination) {
    if (isEmpty(source)) {
        printf("Source stack is empty. Nothing to move.\n");
        return;
    }
    int topValue = pop(source);  // Remove top value from source
    push(destination, topValue); // Push it onto destination
}

// Function to print a stack
void printStack(Stack *s) {
       for (int i = s->top; i >= 0; i--) {
        printf("%d ", s->data[i]);
    }
    printf("\n");
}

// Main function
int main() {
    Stack source, destination;
    initStack(&source);
    initStack(&destination);

    // Pushing values onto the source stack
    push(&source, 1);
    push(&source, 2);
    push(&source, 3);

    printf("Source Stack Before moving top:\n");
       printStack(&source);
        moveTop(&source, &destination);
    printf("\nDestination Stack After moving top:\n");
        printStack(&destination);

    return 0;
}

