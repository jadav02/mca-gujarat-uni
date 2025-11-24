#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *root = NULL;

struct node* createNode(int value) {
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

struct node* insert(struct node *root, int value) {
    if(root == NULL)
        return createNode(value);
    if(value < root->data)
        root->left = insert(root->left, value);
    else if(value > root->data)
        root->right = insert(root->right, value);
    return root;
}

// SEARCH FUNCTION (Recursive)
int search(struct node *root, int key) {
    if(root == NULL)
        return 0;
    if(key == root->data)
        return 1;
    else if(key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}

void inorder(struct node *root) {
    if(root == NULL) return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

int main() {
    int n, value, key;

    printf("How many nodes? ");
    scanf("%d", &n);

    printf("Enter values:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &value);
        root = insert(root, value);
    }

    printf("\nBST (Inorder): ");
    inorder(root);

    printf("\n\nEnter value to search: ");
    scanf("%d", &key);

    if(search(root, key))
        printf("\n%d found in BST.", key);
    else
        printf("\n%d NOT found in BST.", key);

    return 0;
}

