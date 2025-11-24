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

int countOccurrences(int key) {
    struct node *temp = head;
    int count = 0;

    while(temp != NULL) {
        if(temp->data == key)
            count++;
        temp = temp->next;
    }
    return count;
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
    int n, value, key;

    printf("How many nodes? ");
    scanf("%d", &n);

    printf("Enter values:\n");
    for(int i=0; i<n; i++) {
        scanf("%d", &value);
        insert(value);
    }

    display();

    printf("\n\nEnter value to search: ");
    scanf("%d", &key);

    int result = countOccurrences(key);

    printf("\nTotal occurrences of %d = %d", key, result);

    return 0;
}

