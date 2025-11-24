#include <stdio.h>
#include <stdlib.h>

struct node {
    char data;
    struct node *next;
};

struct node *head = NULL;

void insert(char value) {
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;

    if(head == NULL)
        head = newnode;
    else {
        struct node *temp = head;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = newnode;
    }
}

void deleteFirst(char key) {
    struct node *temp = head, *prev = NULL;

    while(temp != NULL) {
        if(temp->data == key) {
            if(prev == NULL)
                head = temp->next;
            else
                prev->next = temp->next;
            free(temp);
            return;
        }
        prev = temp;
        temp = temp->next;
    }
}

void deleteLast(char key) {
    struct node *temp = head, *target = NULL, *prevTarget = NULL, *prev = NULL;

    while(temp != NULL) {
        if(temp->data == key) {
            prevTarget = prev;
            target = temp;
        }
        prev = temp;
        temp = temp->next;
    }

    if(target == NULL) return;

    if(prevTarget == NULL)
        head = head->next;
    else
        prevTarget->next = target->next;

    free(target);
}

void deleteAll(char key) {
    struct node *temp = head, *prev = NULL;

    while(temp != NULL) {
        if(temp->data == key) {
            if(prev == NULL)
                head = temp->next;
            else
                prev->next = temp->next;

            struct node *del = temp;
            temp = temp->next;
            free(del);
        } else {
            prev = temp;
            temp = temp->next;
        }
    }
}

void display() {
    struct node *temp = head;
    printf("\nLinked List: ");
    while(temp != NULL) {
        printf("%c ", temp->data);
        temp = temp->next;
    }
}

int main() {
    int n, choice;
    char value, key;

    printf("How many nodes? ");
    scanf("%d", &n);

    printf("Enter characters:\n");
    for(int i=0; i<n; i++) {
        scanf(" %c", &value);
        insert(value);
    }

    display();

    printf("\n\nEnter character to delete: ");
    scanf(" %c", &key);

    printf("\n1. Delete first occurrence");
    printf("\n2. Delete last occurrence");
    printf("\n3. Delete all occurrences");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if(choice == 1) deleteFirst(key);
    else if(choice == 2) deleteLast(key);
    else if(choice == 3) deleteAll(key);

    printf("\n\nAfter deletion:");
    display();

    return 0;
}

