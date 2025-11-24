#include <stdio.h>
#include <stdlib.h>

int treeArray[50];  // For array-based tree

// Linked list binary tree node
struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *root = NULL;

// Create new node (for linked tree)
struct node* createNode(int value) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

int main() {

    int choice;

    printf("\n--- BINARY TREE (ARRAY + LINKED LIST) ---");
    printf("\n1. Left Skewed Tree");
    printf("\n2. Right Skewed Tree");
    printf("\n3. Complete Binary Tree");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        // ARRAY REPRESENTATION
        treeArray[0] = 10;
        treeArray[1] = 20;
        treeArray[2] = 0;  // No right child
        treeArray[3] = 30;

        // LINKED LIST REPRESENTATION
        root = createNode(10);
        root->left = createNode(20);
        root->left->left = createNode(30);

        printf("\nLeft Skewed Tree Created.\n");
    }

    else if(choice == 2) {
        // ARRAY REPRESENTATION
        treeArray[0] = 10;
        treeArray[1] = 0;  
        treeArray[2] = 20;
        treeArray[5] = 30;

        // LINKED LIST REPRESENTATION
        root = createNode(10);
        root->right = createNode(20);
        root->right->right = createNode(30);

        printf("\nRight Skewed Tree Created.\n");
    }

    else if(choice == 3) {
        // ARRAY REPRESENTATION (Complete Tree)
        treeArray[0] = 10;
        treeArray[1] = 20;
        treeArray[2] = 30;
        treeArray[3] = 40;
        treeArray[4] = 50;
        treeArray[5] = 60;
        treeArray[6] = 70;

        // LINKED LIST REPRESENTATION
        root = createNode(10);
        root->left = createNode(20);
        root->right = createNode(30);
        root->left->left = createNode(40);
        root->left->right = createNode(50);
        root->right->left = createNode(60);
        root->right->right = createNode(70);

        printf("\nComplete Binary Tree Created.\n");
    }

    else {
        printf("\nInvalid Input.");
        return 0;
    }

    printf("\nTree Created Successfully in BOTH Array and Linked Format.\n");

    printf("\nArray Representation: ");
    for(int i = 0; i < 10; i++)
        printf("%d ", treeArray[i]);

    printf("\n(Linked representation stored in memory)\n");

    return 0;
}

