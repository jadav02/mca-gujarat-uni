//Covert infix to postfix
#include <stdio.h>

int main() {
    char infix[50], postfix[50];
    int i = 0, j = 0;

    printf("Enter infix expression: ");
    scanf("%s", infix);

    while(infix[i] != '\0') {
        if((infix[i] >= 'A' && infix[i] <= 'Z') ||
           (infix[i] >= 'a' && infix[i] <= 'z') ||
           (infix[i] >= '0' && infix[i] <= '9')) {

            postfix[j] = infix[i];
            j++;
        }
        else {
            postfix[j] = infix[i+1];
            j++;
            postfix[j] = infix[i];
            j++;
            i++;
        }
        i++;
    }

    postfix[j] = '\0';
    printf("Postfix Expression: %s", postfix);

    return 0;
}

