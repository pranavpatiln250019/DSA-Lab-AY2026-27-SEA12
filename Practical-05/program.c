// Name: PRANAV PATIL
// Roll no: SEA-12
// Circular Queue Implementation Using Array for Parcel Handling System

#include <stdio.h> 

#define SIZE 5 

int arr[SIZE];
int front = -1, rear = -1;

void addParcel() {
    if (front == (rear + 1) % SIZE) { 
        printf("Parcel queue is Full\n\n"); 
        return;
    } 
    
    if (front == -1) { 
        front = 0;
    }
    rear = (rear + 1) % SIZE; 
    printf("Enter parcel no. to add: "); 
    scanf("%d", &arr[rear]); 
    printf("\n");
}

void dispatchParcel() {
    if (front == -1) {
        printf("Parcel queue is Empty\n\n"); 
        return;
    } 
    
    printf("Parcel %d is dispatched\n\n", arr[front]); 
    
    if (front == rear) { // Last element reset condition
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }
}

void displayQueue() {
    if (front == -1) {
        printf("Parcel queue is empty\n\n"); 
        return;
    } 
    
    int i = front;
    printf("Parcel no. left in queue are: "); 
    do {
        printf("%d ", arr[i]); 
        i = (i + 1) % SIZE;
    } while (i != (rear + 1) % SIZE); 
    printf("\n\n");
}

int main() {
    int op; 
    
    do {
        printf("1. Add\n2. Dispatch\n3. Display\n4. Exit\n"); 
        printf("Enter an option: ");
        scanf("%d", &op); 
        
        switch(op) {
            case 1:
                addParcel();
                break;
            case 2:
                dispatchParcel();
                break;
            case 3:
                displayQueue();
                break;
            case 4:
                printf("EXITED SUCCESSFULLY\n");
                break;
            default:
                printf("Invalid selection! Please enter a choice between 1 and 4.\n\n");
        }
    } while(op != 4); // Fixed loop conditional safety check

    return 0;
}
