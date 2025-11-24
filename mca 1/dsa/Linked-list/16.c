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

int findFromEnd(int n) {
    struct node *first = head;
    struct node *second = head;

    for(int i = 0; i < n; i++) {
        if(first == NULL)
            return -1;
        first = first->next;
    }

    while(first != NULL) {
        first = first->next;
        second = second->next;
    }

    return second->data;
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
    int n, value, pos, ans;

    printf("How many nodes? ");
    scanf("%d", &n);

    printf("Enter values:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &value);
        insert(value);
    }

    display();

    printf("\n\nEnter position from end: ");
    scanf("%d", &pos);

    ans = findFromEnd(pos);

    if(ans == -1)
        printf("\nInvalid Position!");
    else
        printf("\nThe %dth element from end = %d", pos, ans);

    return 0;
}

