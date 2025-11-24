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

    if(head == NULL) {
        head = newnode;
        newnode->next = head;
        newnode->prev = head;
    } else {
        struct node *last = head->prev;

        last->next = newnode;
        newnode->prev = last;

        newnode->next = head;
        head->prev = newnode;
    }
}

void swapK(int k) {
    if(head == NULL || head->next == head) return;

    struct node *temp = head;
    int count = 1;

    while(count < k && temp->next != head) {
        temp = temp->next;
        count++;
    }

    struct node *node1 = temp;
    struct node *node2 = temp->next;

    if(node2 == head) return;

    int t = node1->data;
    node1->data = node2->data;
    node2->data = t;
}

void display() {
    if(head == NULL) {
        printf("\nList Empty");
        return;
    }

    struct node *temp = head;
    printf("\nCircular Doubly Linked List: ");
    
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while(temp != head);
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

    printf("\n\nEnter K to swap K and K+1: ");
    scanf("%d", &k);

    swapK(k);

    printf("\nAfter swapping:");
    display();

    return 0;
}

