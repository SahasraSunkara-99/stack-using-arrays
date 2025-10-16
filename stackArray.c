#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int arr[MAX];
int top = -1;
int isFull() {
    if (top == MAX - 1) {
        printf("Stack is full!\n");
        return 1;
    }
    return 0;
}
int isEmpty() {
    if (top == -1) {
        printf("Stack is empty!\n");
        return 1;
    }
    return 0;
}
void push(int value) {// Push
    if (!isFull()) {
        arr[++top] = value;
        printf("Value %d inserted into stack.\n", value);
    }
}
void pop() {// Pop
    if (!isEmpty()) {
        printf("Popped value: %d\n", arr[top--]);
    }
}
int peek() {// Peek
    if (!isEmpty()) {
        return arr[top];
    }
    return -1;
}
void displayStack() {// Display
    if (!isEmpty()) {
        printf("Stack elements (top to bottom):\n");
        int i;
        for (i = top; i >= 0; i--) {
            printf("%d\n", arr[i]);
        }
    }
}
int lengthOfStack() {//length of stack
    return top + 1;
}
int main() {// Main function
    int choice, value;
    printf("\n--- Stack Operations using Array ---\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Peek\n");
    printf("4. Display Stack\n");
    printf("5. Length of Stack\n");
    printf("6. Exit\n");
    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                value = peek();
                if (value != -1)
                    printf("Top element: %d\n", value);
                break;
            case 4:
                displayStack();
                break;
            case 5:
                printf("Current stack length: %d\n", lengthOfStack());
                break;
            case 6:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

