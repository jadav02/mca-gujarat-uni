#include <stdio.h>

int main() {
    int a[10][10], odd[100], even[100];
    int r, c, i, j, o = 0, e = 0;

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
            if(a[i][j] % 2 == 0)
                even[e++] = a[i][j];
            else
                odd[o++] = a[i][j];
        }
    }

    printf("\nOdd elements:\n");
    for(i=0;i<o;i++){
        printf("%d ", odd[i]);
    }

    printf("\n\nEven elements:\n");
    for(i=0;i<e;i++){
        printf("%d ", even[i]);
    }

    return 0;
}

