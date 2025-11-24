#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node* head = NULL;

void insert(int value) {
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

void removeDuplicates() {
    struct node *ptr1, *ptr2, *dup;

    ptr1 = head;
    while(ptr1 != NULL && ptr1->next != NULL) {
        ptr2 = ptr1;
        while(ptr2->next != NULL) {
            if(ptr1->data == ptr2->next->data) {
                dup = ptr2->next;
                ptr2->next = ptr2->next->next;
                free(dup);
            } else {
                ptr2 = ptr2->next;
            }
        }
        ptr1 = ptr1->next;
    }
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
    int n, value;

    printf("How many nodes? ");
    scanf("%d", &n);

    printf("Enter values:\n");
    for(int i=0; i<n; i++) {
        scanf("%d", &value);
        insert(value);
    }

    printf("\nBefore removing duplicates:");
    display();

    removeDuplicates();

    printf("\nAfter removing duplicates:");
    display();

    return 0;
}

