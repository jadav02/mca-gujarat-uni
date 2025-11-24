#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *newHead = NULL;

void insert(struct node **head, int value) {
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;

    if(*head == NULL)
        *head = newnode;
    else {
        struct node *temp = *head;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = newnode;
    }
}

void createAlternateList() {
    struct node *temp = head;
    int count = 0;

    while(temp != NULL) {
        if(count % 2 == 0) {
            insert(&newHead, temp->data);
        }
        temp = temp->next;
        count++;
    }
}

void display(struct node *head) {
    struct node *temp = head;
    printf(" ");
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
        insert(&head, value);
    }

    printf("\nOriginal List:");
    display(head);

    createAlternateList();

    printf("\nNew List (Alternate Elements):");
    display(newHead);

    return 0;
}

