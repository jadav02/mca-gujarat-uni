#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j;
    int count = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of the matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j] != 0)
                count++;
        }
    }

    printf("\nTotal number of non-zero elements = %d", count);

    return 0;
}

