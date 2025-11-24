#include <stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10];
    int r, c, i, j;
    int X = 2, Y = 3;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of matrix A:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d", &B[i][j]);
        }
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            C[i][j] = X*A[i][j] + Y*B[i][j];
        }
    }

    printf("\nResult matrix XA + YB:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

