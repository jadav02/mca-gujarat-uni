#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j;
    int sum = 0;
    float mean;

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
            sum += a[i][j];
        }
    }

    mean = (float)sum / (r * c);

    printf("\nSum of elements = %d", sum);
    printf("\nMean of elements = %.2f", mean);

    return 0;
}

