#include <stdio.h>

int main() {
    int a[100], n, i, pos;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    printf("Enter position (starting from 0): ");
    scanf("%d", &pos);

    if(pos >= 0 && pos < n)
        printf("\nAddress of element %d is %p", a[pos], &a[pos]);
    else
        printf("\nInvalid position");

    return 0;
}

