#include <stdio.h>

int main() {
    float a[100];
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter floating point numbers:\n");
    for(i=0;i<n;i++){
        scanf("%f", &a[i]);
    }

    printf("\nArray elements are:\n");
    for(i=0;i<n;i++){
        printf("%.2f ", a[i]);
    }

    return 0;
}

