#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *copyHead = NULL;

void insert(int value) {
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;

    if(head == NULL) {
        head = newnode;
        newnode->next = head;
    } else {
        struct node *temp = head;
        while(temp->next != head)
            temp = temp->next;
        temp->next = newnode;
        newnode->next = head;
    }
}

void copyList() {
    if(head == NULL) return;

    struct node *temp = head;

    do {
        struct node *newnode = malloc(sizeof(struct node));
        newnode->data = temp->data;

        if(copyHead == NULL) {
            copyHead = newnode;
            newnode->next = copyHead;
        } else {
            struct node *t = copyHead;
            while(t->next != copyHead)
                t = t->next;
            t->next = newnode;
            newnode->next = copyHead;
        }

        temp = temp->next;
    } while(temp != head);
}

void display(struct node *h) {
    if(h == NULL) {
        printf("List empty");
        return;
    }

    struct node *temp = h;
    printf(" ");
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while(temp != h);
}

int main() {
    int n, value;

    printf("How many nodes? ");
    scanf("%d", &n);

    printf("Enter values:\n");
    for(int i=0; i<n; i++) {
        scanf("%d", &value);
        insert(value);
    }

    printf("\nOriginal Circular Linked List:");
    display(head);

    copyList();

    printf("\nCopied Circular Linked List:");
    display(copyHead);

    return 0;
}

