#include <stdio.h>
#include <stdlib.h>

// structure of tree node
struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *root = NULL;

// function to create new node
struct node* createNode(int value) {
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

// recursive traversals
void preorder(struct node *root) {
    if(root == NULL)
        return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct node *root) {
    if(root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void postorder(struct node *root) {
    if(root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

int main() {

    // Creating a sample tree manually
    //        10
    //       /  \
    //     20    30
    //    /  \
    //   40  50

    root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(40);
    root->left->right = createNode(50);

    printf("\nBinary Tree Traversals:\n");

    printf("\nPreorder  : ");
    preorder(root);

    printf("\nInorder   : ");
    inorder(root);

    printf("\nPostorder : ");
    postorder(root);

    return 0;
}

