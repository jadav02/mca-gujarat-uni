#include <stdio.h>

int main() {
    int a[3][3], i, j;
    int (*p)[3];

    printf("Enter 3x3 matrix elements:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d", &a[i][j]);
        }
    }

    p = a;

    printf("\nMatrix using pointer:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", *(*(p+i) + j));
        }
        printf("\n");
    }

    return 0;
}

