#include <stdio.h>

int main() {
    int arr[100], n, i;
    int sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    for(i=0;i<n;i++){
        sum += arr[i] * arr[i];
    }

    printf("\nSum of squares of elements = %d", sum);

    return 0;
}

