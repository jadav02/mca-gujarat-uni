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
    printf("Linked List: ");
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main() {
    long num;
    int digits[20], i = 0;

    printf("Enter a number: ");
    scanf("%ld", &num);

    while(num > 0) {
        digits[i] = num % 10;
        num = num / 10;
        i++;
    }

    for(int j = i - 1; j >= 0; j--)
        insert(digits[j]);

    display();

    return 0;
}

