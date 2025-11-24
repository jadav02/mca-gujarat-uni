#include <stdio.h>

int main() {
    char postfix[50];
    int stack[50];
    int top = -1;
    int i = 0;

    printf("Enter postfix expression: ");
    scanf("%s", postfix);

    while (postfix[i] != '\0') {

        if (postfix[i] >= '0' && postfix[i] <= '9') {
            top++;
            stack[top] = postfix[i] - '0';
        } 
        else {
            int b = stack[top];
            top--;
            int a = stack[top];
            top--;

            if (postfix[i] == '+') stack[++top] = a + b;
            else if (postfix[i] == '-') stack[++top] = a - b;
            else if (postfix[i] == '*') stack[++top] = a * b;
            else if (postfix[i] == '/') stack[++top] = a / b;
        }

        i++;
    }

    printf("Result = %d", stack[top]);
    return 0;
}

