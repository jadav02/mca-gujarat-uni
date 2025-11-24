#include <stdio.h>

int main() {
    float a[100], b[100], c[200];
    int n1, n2, i, j = 0;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for(i=0;i<n1;i++){
        scanf("%f", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for(i=0;i<n2;i++){
        scanf("%f", &b[i]);
    }

    for(i=0;i<n1;i++){
        c[j++] = a[i];
    }

    for(i=0;i<n2;i++){
        c[j++] = b[i];
    }

    printf("\nMerged array in reverse order:\n");
    for(i=j-1; i>=0; i--){
        printf("%.2f ", c[i]);
    }

    return 0;
}

