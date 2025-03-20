#include <stdio.h>

#define MAX_SIZE 6

// Define the structure for a stack
typedef struct {
    int data[MAX_SIZE];
    int top;
} Stack;

// Function to initialize the stack
void initStack(Stack *stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
int isEmpty(Stack *stack) {
    return stack->top == -1;
}

// Function to check if the stack is full
int isFull(Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

// Function to push an element onto the stack
void push(Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Stack is full. Cannot push %d.\n", value);
    } else {
        stack->data[++stack->top] = value;
        printf("%d pushed onto the stack.\n", value);
    }
}

// Function to pop an element from the stack
void pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty. Cannot pop.\n");
    } else {
        printf("%d popped from the stack.\n", stack->data[stack->top--]);
    }
}

// Function to print the top element of the stack
void printTop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty. No top element.\n");
    } else {
        printf("Top element: %d\n", stack->data[stack->top]);
    }
}

// Function to print all elements of the stack
void printAll(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = stack->top; i >= 0; i--) {
            printf("%d ", stack->data[i]);
        }
        printf("\n");
    }
}

int main() {
    Stack stack;
    initStack(&stack);
    int choice, value;

    while (1) {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print Top Element\n");
        printf("4. Print All Elements\n");
        printf("5. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(&stack, value);
                break;
            case 2:
                pop(&stack);
                break;
            case 3:
                printTop(&stack);
                break;
            case 4:
                printAll(&stack);
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please choose a valid option.\n");
        }
    }

    return 0;
}
