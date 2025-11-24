#include <stdio.h>

int isLowerTriangular(int a[][10], int n) {
    int i, j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i][j] != 0)
                return 0;
        }
    }
    return 1;
}

int main() {
    int a[10][10], n, i, j, result;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }

    result = isLowerTriangular(a, n);

    if(result == 1)
        printf("\nMatrix is Lower Triangular");
    else
        printf("\nMatrix is NOT Lower Triangular");

    return 0;
}

