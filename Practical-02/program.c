// Name: PRANAV PATIL
// Roll no: SEA12
// Student Result Database Management using Array of Structures 

#include <stdio.h>

typedef struct stud {
    int rn;
    char name[10];
    char program[10];
    char sub1[10];
    char sub2[10];
    int sub1_mk;
    int sub2_mk;
    int total;
    float avg;
} stud;

// Function prototypes declared globally
void create(stud s[], int n);
void disp(stud s[], int n);
void search(stud s[], int n, int key);
void sort(stud s[], int n);

int main() {
    stud s[20];
    int n = 0, op, key;

    do {
        printf("\n1.Create\n2.Disp\n3.Search\n4.Sort\n5.Exit\n");
        printf("Enter the Option: ");
        scanf("%d", &op);

        switch(op) {
            case 1:
                printf("Enter Number of Students: ");
                scanf("%d", &n);
                create(s, n);
                break;
            case 2:
                if (n == 0) {
                    printf("Database is empty! Create records first.\n");
                } else {
                    disp(s, n);
                }
                break;
            case 3:
                if (n == 0) {
                    printf("Database is empty!\n");
                } else {
                    printf("Enter Roll number to be searched:\t");
                    scanf("%d", &key);
                    search(s, n, key);
                }
                break;
            case 4:
                if (n == 0) {
                    printf("Database is empty!\n");
                } else {
                    sort(s, n);
                    printf("Records sorted successfully by Roll Number!\n");
                }
                break;
            case 5:
                printf("Exiting database application.\n");
                break;
            default:
                printf("Invalid selection!\n");
        }
    } while(op != 5);

    return 0;
}

void create(stud s[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter Details for Student %d:\n", i + 1);
        printf("Enter Student's Roll Number: ");
        scanf("%d", &s[i].rn);

        printf("Enter Student's Name: ");
        scanf("%s", s[i].name);

        printf("Enter Student's Program: ");
        scanf("%s", s[i].program);

        printf("Enter subject 1 Name: ");
        scanf("%s", s[i].sub1);

        printf("Enter subject 2 Name: ");
        scanf("%s", s[i].sub2);

        printf("Enter subject 1 Marks: ");
        scanf("%d", &s[i].sub1_mk);

        printf("Enter subject 2 Marks: ");
        scanf("%d", &s[i].sub2_mk);

        s[i].total = s[i].sub1_mk + s[i].sub2_mk;
        s[i].avg = s[i].total / 2.0; // Fixed integer division
    }
}

void disp(stud s[], int n) {
    printf("\nROLL NO\tNAME\tPROGRAM\tSUB1\tSUB2\tMARKS1\tMARKS2\tTOTAL\tAVERAGE\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t%s\t%s\t%s\t%d\t%d\t%d\t%.2f\n", 
            s[i].rn, s[i].name, s[i].program, s[i].sub1, s[i].sub2, s[i].sub1_mk, s[i].sub2_mk, s[i].total, s[i].avg);
    }
}

void search(stud s[], int n, int key) {
    int i;
    for(i = 0; i < n; i++) {
        if(key == s[i].rn) {
            printf("\nRecord of Roll no %d FOUND\n", key);
            printf("ROLL NO\tNAME\tPROGRAM\tSUB1\tSUB2\tMARKS1\tMARKS2\tTOTAL\tAVERAGE\n");
            printf("%d\t%s\t%s\t%s\t%s\t%d\t%d\t%d\t%.2f\n", 
                s[i].rn, s[i].name, s[i].program, s[i].sub1, s[i].sub2, s[i].sub1_mk, s[i].sub2_mk, s[i].total, s[i].avg);
            break;
        }
    }
    if(i == n) {
        printf("Record of Roll no %d NOT FOUND\n", key);
    }
}

void sort(stud s[], int n) {
    stud temp;
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(s[j].rn > s[j+1].rn) {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
}
