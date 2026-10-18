// Name: PRANAV PATIL
// Roll no: SEA12
// Decimal to Binary Conversion using Stack

#include <stdio.h>

#define MAX 32

int stack[MAX];
int top = -1;

// Standard Stack Operations
void push(int remainder) {
    if (top < MAX - 1) {
        top++;
        stack[top] = remainder;
    }
}

int pop() {
    if (top >= 0) {
        int val = stack[top];
        top--;
        return val;
    }
    return -1;
}

int main() {
    int n, temp;
    
    printf("Enter Decimal number: ");
    scanf("%d", &n);
    
    temp = n; // Keep original value intact
    
    // Handle the edge case for 0 explicitly
    if (n == 0) {
        printf("Binary number for given decimal number is: 0\n");
        return 0;
    }

    // Push remainders onto the stack
    while(temp != 0) {
        int r = temp % 2;
        push(r);
        temp = temp / 2;
    }

    printf("Binary number for given decimal number is: ");
    // Pop elements from stack to reverse the order
    while(top >= 0) {
        printf("%d", pop());
    }
    printf("\n");

    return 0;
}
