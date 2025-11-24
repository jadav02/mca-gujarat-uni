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

    display();

    int min, max;
    struct node *temp = head;

    min = max = temp->data;

    while(temp != NULL) {
        if(temp->data < min)
            min = temp->data;
        if(temp->data > max)
            max = temp->data;
        temp = temp->next;
    }

    printf("\n\nMinimum value = %d", min);
    printf("\nMaximum value = %d", max);

    return 0;
}

