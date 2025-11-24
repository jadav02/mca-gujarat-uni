#include <stdio.h>

int main() {
    int num, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nDigits:\n");

    while(num > 0) {
        digit = num % 10;
        printf("%d ", digit);
        num = num / 10;
    }

    return 0;
}

