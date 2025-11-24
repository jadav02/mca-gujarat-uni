#include <stdio.h>

int main() {
    char exp[50];
    char stack[50];
    int top = -1;
    int i = 0;

    printf("Enter expression: ");
    scanf("%s", exp);

    while (exp[i] != '\0') {

        if (exp[i] == '(') {
            top++;
            stack[top] = '(';
        }
        else if (exp[i] == ')') {

            if (top == -1) {
                printf("Not Balanced");
                return 0;
            }

            top--;
        }

        i++;
    }

    if (top == -1)
        printf("Balanced");
    else
        printf("Not Balanced");

    return 0;
}

