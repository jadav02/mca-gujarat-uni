#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

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

int countNonZero() {
    if(head == NULL) return 0;

    struct node *temp = head;
    int count = 0;

    do {
        if(temp->data != 0)
            count++;
        temp = temp->next;
    } while(temp != head);

    return count;
}

void display() {
    if(head == NULL) {
        printf("\nList is empty");
        return;
    }

    struct node *temp = head;
    printf("\nCircular Linked List: ");
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while(temp != head);
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

    display();

    int result = countNonZero();
    printf("\n\nTotal non-zero elements = %d", result);

    return 0;
}

