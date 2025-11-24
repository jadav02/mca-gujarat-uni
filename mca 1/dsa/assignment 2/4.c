#include <stdio.h>

int main() {
    int num, temp, stack[50], arr[50];
    int top = -1, i = 0, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        arr[i] = temp % 10;
        top++;
        stack[top] = arr[i];
        temp = temp / 10;
        i++;
    }

    for (int j = 0; j < i; j++) {
        if (arr[j] != stack[top]) {
            flag = 0;
            break;
        }
        top--;
    }

    if (flag == 1)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome");

    return 0;
}

