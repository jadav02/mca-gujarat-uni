#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2, i, j, k, choice;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter elements of first matrix:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    printf("Enter elements of second matrix:\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d", &b[i][j]);
        }
    }

    do {
        printf("\n\nMENU");
        printf("\n1. Display matrices");
        printf("\n2. Sum of matrices");
        printf("\n3. Transpose of matrices");
        printf("\n4. Product of matrices");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nFirst matrix:\n");
                for(i=0;i<r1;i++){
                    for(j=0;j<c1;j++){
                        printf("%d ", a[i][j]);
                    }
                    printf("\n");
                }

                printf("\nSecond matrix:\n");
                for(i=0;i<r2;i++){
                    for(j=0;j<c2;j++){
                        printf("%d ", b[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 2:
                if(r1==r2 && c1==c2){
                    printf("\nSum of matrices:\n");
                    for(i=0;i<r1;i++){
                        for(j=0;j<c1;j++){
                            printf("%d ", a[i][j] + b[i][j]);
                        }
                        printf("\n");
                    }
                } else {
                    printf("\nAddition not possible.");
                }
                break;

            case 3:
                printf("\nTranspose of first matrix:\n");
                for(i=0;i<c1;i++){
                    for(j=0;j<r1;j++){
                        printf("%d ", a[j][i]);
                    }
                    printf("\n");
                }

                printf("\nTranspose of second matrix:\n");
                for(i=0;i<c2;i++){
                    for(j=0;j<r2;j++){
                        printf("%d ", b[j][i]);
                    }
                    printf("\n");
                }
                break;

            case 4:
                if(c1 == r2){
                    printf("\nProduct of matrices:\n");
                    for(i=0;i<r1;i++){
                        for(j=0;j<c2;j++){
                            c[i][j]=0;
                            for(k=0;k<c1;k++){
                                c[i][j] += a[i][k] * b[k][j];
                            }
                            printf("%d ", c[i][j]);
                        }
                        printf("\n");
                    }
                } else {
                    printf("\nMultiplication not possible.");
                }
                break;

            case 5:
                printf("\nExiting...");
                break;

            default:
                printf("\nInvalid choice.");
        }

    } while(choice != 5);

    return 0;
}

