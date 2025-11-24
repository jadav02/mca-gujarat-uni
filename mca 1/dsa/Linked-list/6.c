#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head1 = NULL;
struct node *head2 = NULL;
struct node *result = NULL;

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

void mergeLists() {
    struct node *p = head1;
    struct node *q = head2;

    while(p != NULL && q != NULL) {
        if(p->data < q->data) {
            insert(&result, p->data);
            p = p->next;
        } else {
            insert(&result, q->data);
            q = q->next;
        }
    }

    while(p != NULL) {
        insert(&result, p->data);
        p = p->next;
    }

    while(q != NULL) {
        insert(&result, q->data);
        q = q->next;
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
    int n1, n2, val;

    printf("How many nodes in List 1? ");
    scanf("%d", &n1);
    printf("Enter sorted values for List 1:\n");
    for(int i=0; i<n1; i++) {
        scanf("%d", &val);
        insert(&head1, val);
    }

    printf("\nHow many nodes in List 2? ");
    scanf("%d", &n2);
    printf("Enter sorted values for List 2:\n");
    for(int i=0; i<n2; i++) {
        scanf("%d", &val);
        insert(&head2, val);
    }

    printf("\nList 1:");
    display(head1);

    printf("\nList 2:");
    display(head2);

    mergeLists();

    printf("\n\nMerged Sorted List:");
    display(result);

    return 0;
}

