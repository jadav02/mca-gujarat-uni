#include <stdio.h>

void readSquare(int a[][10], int n) {
    int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }
}

void displaySquare(int a[][10], int n) {
    int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int a[10][10], n;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    readSquare(a, n);

    printf("\nSquare matrix:\n");
    displaySquare(a, n);

    return 0;
}

