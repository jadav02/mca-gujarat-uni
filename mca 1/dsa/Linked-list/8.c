#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void insert(int value) {
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = value;
    newnode->prev = NULL;
    newnode->next = NULL;

    if(head == NULL)
        head = newnode;
    else {
        struct node *temp = head;
        while(temp->next != NULL)
            temp = temp->next;

        temp->next = newnode;
        newnode->prev = temp;
    }
}

void moveFirstToLast() {
    if(head == NULL || head->next == NULL)
        return;

    struct node *first = head;
    struct node *temp = head;

    head = head->next;
    head->prev = NULL;

    while(temp->next != NULL)
        temp = temp->next;

    temp->next = first;
    first->prev = temp;
    first->next = NULL;
}

void display() {
    struct node *temp = head;
    printf("\nDoubly Linked List: ");
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main() {
    int n, value;

    printf("How many nodes? ");
    scanf("%d", &n);

    printf("Enter values:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &value);
        insert(value);
    }

    printf("\nBefore operation:");
    display();

    moveFirstToLast();

    printf("\nAfter moving first node to last:");
    display();

    return 0;
}

