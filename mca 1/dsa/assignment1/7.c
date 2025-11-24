#include <stdio.h>

int main() {
    int a[10][10], n, i;
    int sum = 0;
    int *p;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }

    p = &a[0][0];

    for(i=0;i<n;i++){
        sum += *(p + i*n + i);
    }

    printf("\nSum of main diagonal elements = %d", sum);

    return 0;
}

