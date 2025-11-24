#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertBeg(int value) {
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = head;
    head = newnode;
}

void insertEnd(int value) {
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;

    if(head == NULL) {
        head = newnode;
        return;
    }

    struct node *temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = newnode;
}

void insertPos(int value, int pos) {
    if(pos == 1) {
        insertBeg(value);
        return;
    }

    struct node *temp = head;
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = value;

    for(int i=1; i<pos-1 && temp!=NULL; i++)
        temp = temp->next;

    if(temp == NULL) return;

    newnode->next = temp->next;
    temp->next = newnode;
}

void deleteBeg() {
    if(head == NULL) return;

    struct node *temp = head;
    head = head->next;
    free(temp);
}

void deleteEnd() {
    if(head == NULL) return;
    if(head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }

    struct node *temp = head;
    while(temp->next->next != NULL)
        temp = temp->next;

    free(temp->next);
    temp->next = NULL;
}

void deletePos(int pos) {
    if(head == NULL) return;
    if(pos == 1) {
        deleteBeg();
        return;
    }

    struct node *temp = head;
    struct node *prev = NULL;

    for(int i=1; i<pos && temp!=NULL; i++) {
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL) return;

    prev->next = temp->next;
    free(temp);
}

void display() {
    struct node *temp = head;
    printf("\nLinked List: ");
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main() {
    int choice, value, pos;

    do {
        printf("\n\n---- MENU ----");
        printf("\n1. Insert at Beginning");
        printf("\n2. Insert at End");
        printf("\n3. Insert at Position");
        printf("\n4. Delete from Beginning");
        printf("\n5. Delete from End");
        printf("\n6. Delete from Position");
        printf("\n7. Display List");
        printf("\n8. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                insertBeg(value);
                break;

            case 2:
                printf("Enter value: ");
                scanf("%d", &value);
                insertEnd(value);
                break;

            case 3:
                printf("Enter value and position: ");
                scanf("%d %d", &value, &pos);
                insertPos(value, pos);
                break;

            case 4:
                deleteBeg();
                break;

            case 5:
                deleteEnd();
                break;

            case 6:
                printf("Enter position: ");
                scanf("%d", &pos);
                deletePos(pos);
                break;

            case 7:
                display();
                break;

            case 8:
                printf("Exiting...");
                break;

            default:
                printf("Invalid Option!");
        }
    } while(choice != 8);

    return 0;
}

