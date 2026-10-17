// Name: PRANAV PATIL
// Roll no: SEA12
// Practical 1: Pattern Printing Assignment

#include <stdio.h>

void printRightAngleTriangle(int n) {
    printf("\n--- Right-Angle Triangle with Numbers ---\n");
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}

void printDiamond(int n) {
    printf("\n--- Diamond Shape with Numbers ---\n");
    for(int i = 1; i <= n; i++){
        for(int j = n-1; j >= i; j--){
            printf(" ");
        }
        for(int j = i; j > 0; j--){
            printf("%d ", i);
        }
        printf("\n");
    }
    for(int i = n-1; i > 0; i--){
        for(int j = i; j < n; j++){
            printf(" ");
        }
        for(int j = 0; j < i; j++){
            printf("%d ", i);
        }
        printf("\n");
    }
}

void printAsteriskPyramid(int n) {
    printf("\n--- Pyramid with Asterisks ---\n");
    for(int i = 1; i <= n; i++){
        for(int j = n-1; j >= i; j--){
            printf(" ");
        }
        for(int j = i; j > 0; j--){
            printf("* ");
        }
        printf("\n");
    }
}

void printAlphabetPyramid(int n) {
    printf("\n--- Pyramid using Alphabets ---\n");
    for(int i = 0; i < n; i++){
        char ch = 'A';
        for(int j = n-1; j > i; j--){
            printf(" ");
        }
        for(int j = 0; j <= i; j++){
            printf("%c", ch+j);
        }
        for(int j = i; j > 0; j--){
            printf("%c", ch+j-1);
        }
        printf("\n");
    }
}

int main() {
    int choice, n = 4;

    printf("=========================================\n");
    printf("   DSA Lab Practical 1 - PRANAV PATIL    \n");
    printf("=========================================\n");
    printf("1. Right-angle triangle with numbers\n");
    printf("2. Diamond shape with numbers\n");
    printf("3. Pyramid with asterisks\n");
    printf("4. Pyramid using alphabets\n");
    printf("5. Run all patterns sequentially\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printRightAngleTriangle(n);
            break;
        case 2:
            printDiamond(n);
            break;
        case 3:
            printAsteriskPyramid(n);
            break;
        case 4:
            printAlphabetPyramid(n);
            break;
        case 5:
            printRightAngleTriangle(n);
            printDiamond(n);
            printAsteriskPyramid(n);
            printAlphabetPyramid(n);
            break;
        default:
            printf("Invalid selection! Please choose a number between 1 and 5.\n");
    }

    return 0;
}
