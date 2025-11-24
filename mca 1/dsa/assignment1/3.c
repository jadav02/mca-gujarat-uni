#include <stdio.h>

int main() {
    int arr[100], n, temp, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    temp = arr[1];
    arr[1] = arr[n-2];
    arr[n-2] = temp;

    printf("\nArray after swapping second and second last element:\n");
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }

    return 0;
}

