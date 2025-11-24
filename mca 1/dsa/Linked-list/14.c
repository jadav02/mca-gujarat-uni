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

    if(head == NULL)
        head = newnode;
    else {
        struct node *temp = head;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = newnode;
    }
}

void deleteKth(int k) {
    struct node *temp = head, *prev = NULL;
    int count = 1;

    if(head == NULL) return;

    if(k == 1) {
        head = head->next;
        free(temp);
        return;
    }

    while(temp != NULL && count < k) {
        prev = temp;
        temp = temp->next;
        count++;
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
    int n, value, k;

    printf("How many nodes? ");
    scanf("%d", &n);

    printf("Enter values:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &value);
        insert(value);
    }

    display();

    printf("\n\nEnter position (K) to delete: ");
    scanf("%d", &k);

    deleteKth(k);

    printf("\nAfter deletion:");
    display();

    return 0;
}

