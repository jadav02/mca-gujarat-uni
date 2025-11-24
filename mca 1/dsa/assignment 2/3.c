#include <stdio.h>

int main() {
    int num, stack[50], top = -1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        top++;
        stack[top] = num % 10;
        num = num / 10;
    }

    printf("Reversed Number: ");
    while (top != -1) {
        printf("%d", stack[top]);
        top--;
    }

    return 0;
}

