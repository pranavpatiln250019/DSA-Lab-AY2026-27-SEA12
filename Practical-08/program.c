// Name: PRANAV PATIL
// Roll no: SEA-12
// Binary Search Tree Operation for Online Directory System

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char name[30];
    char mobile[15];
    struct Node *left, *right;
};

// Create a new tree node
struct Node* createNode(char name[], char mobile[]) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->name, name);
    strcpy(newNode->mobile, mobile);
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Insert into BST using case-insensitive ranking
struct Node* insert(struct Node *root, char name[], char mobile[]) {
    if (root == NULL)
        return createNode(name, mobile);
        
    // Fixed: Using strcasecmp to establish case-insensitive lexicographical balancing
    if (strcasecmp(name, root->name) < 0)
        root->left = insert(root->left, name, mobile);
    else if (strcasecmp(name, root->name) > 0)
        root->right = insert(root->right, name, mobile);
        
    return root;
}

// Inorder Traversal (Left, Root, Right) -> Prints contacts alphabetically
void inorder(struct Node *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%s\t\t%s\n", root->name, root->mobile);
        inorder(root->right);
    }
}

// Preorder Traversal (Root, Left, Right)
void preorder(struct Node *root) {
    if (root != NULL) {
        printf("%s\t\t%s\n", root->name, root->mobile);
        preorder(root->left);
        preorder(root->right);
    }
}

// Postorder Traversal (Left, Right, Root)
void postorder(struct Node *root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%s\t\t%s\n", root->name, root->mobile);
    }
}

// Search using case-insensitive matching
void search(struct Node *root, char name[]) {
    if (root == NULL) {
        printf("Contact not found.\n");
        return;
    }
    
    if (strcasecmp(name, root->name) == 0) {
        printf("\nContact Found!\n");
        printf("Name   : %s\n", root->name);
        printf("Mobile : %s\n", root->mobile);
    } 
    else if (strcasecmp(name, root->name) < 0)
        search(root->left, name);
    else
        search(root->right, name);
}

// Helper function to free tree memory on exit
void freeTree(struct Node* root) {
    if (root != NULL) {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}

int main() {
    struct Node *root = NULL;
    int choice;
    char name[30], mobile[15];
    
    do {
        printf("\n--- ONLINE DIRECTORY SYSTEM ---\n");
        printf("1. Create / Insert\n");
        printf("2. Display All Traversals\n");
        printf("3. Search\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        
        // Input validation to avoid infinite loops if characters are typed
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input type! Please enter numbers only.\n");
            while (getchar() != '\n'); // clear input stream buffer
            continue;
        }
        
        switch(choice) {
            case 1:
                printf("Enter name: ");
                scanf("%s", name);
                printf("Enter mobile number: ");
                scanf("%s", mobile);
                root = insert(root, name, mobile);
                printf("Contact added successfully.\n");
                break;
                
            case 2:
                if (root == NULL) {
                    printf("\nDirectory is empty!\n");
                    break;
                }
                printf("\n--- INORDER TRAVERSAL (Sorted Directory) ---\n");
                printf("Name\t\tMobile\n");
                inorder(root);
                
                printf("\n--- PREORDER TRAVERSAL ---\n");
                printf("Name\t\tMobile\n");
                preorder(root);
                
                printf("\n--- POSTORDER TRAVERSAL ---\n");
                printf("Name\t\tMobile\n");
                postorder(root);
                break;
                
            case 3:
                if (root == NULL) {
                    printf("\nDirectory is empty!\n");
                    break;
                }
                printf("Enter name to search: ");
                scanf("%s", name);
                search(root, name);
                break;
                
            case 4:
                printf("Cleaning memory and exiting program...\n");
                freeTree(root);
                break;
                
            default:
                printf("Invalid choice! Choose an option between 1 and 4.\n");
        }
    } while(choice != 4);
    
    return 0;
}
