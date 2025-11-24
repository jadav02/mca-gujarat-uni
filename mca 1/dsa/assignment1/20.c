#include <stdio.h>

int isSymmetric(int a[][10], int n) {
    int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j] != a[j][i])
                return 0;
        }
    }
    return 1;
}

int main() {
    int a[10][10], n, i, j, result;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }

    result = isSymmetric(a, n);

    if(result == 1)
        printf("\nMatrix is Symmetric");
    else
        printf("\nMatrix is NOT Symmetric");

    return 0;
}

