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
    int n, value, sum = 0, count = 0;
    float mean;

    printf("How many nodes? ");
    scanf("%d", &n);

    printf("Enter values:\n");
    for(int i=0; i<n; i++) {
        scanf("%d", &value);
        insert(value);
    }

    display();

    struct node *temp = head;
    while(temp != NULL) {
        sum += temp->data;
        count++;
        temp = temp->next;
    }

    mean = (float)sum / count;

    printf("\n\nSum of nodes = %d", sum);
    printf("\nMean = %.2f", mean);

    return 0;
}

