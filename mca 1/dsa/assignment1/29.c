#include <stdio.h>

int main() {
    int a[100], b[100], c[200];
    int n1, n2, i, j, k, choice, temp;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter elements of first array:\n");
    for(i=0;i<n1;i++){
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter elements of second array:\n");
    for(i=0;i<n2;i++){
        scanf("%d", &b[i]);
    }

    printf("\n1. Merge when arrays are sorted");
    printf("\n2. Merge when arrays are not sorted");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        i = 0;
        j = 0;
        k = 0;
        while(i<n1 && j<n2){
            if(a[i] < b[j])
                c[k++] = a[i++];
            else
                c[k++] = b[j++];
        }
        while(i<n1)
            c[k++] = a[i++];
        while(j<n2)
            c[k++] = b[j++];

        printf("\nMerged sorted array:\n");
        for(i=0;i<k;i++){
            printf("%d ", c[i]);
        }
    }
    else if(choice == 2) {
        k = 0;
        for(i=0;i<n1;i++)
            c[k++] = a[i];
        for(i=0;i<n2;i++)
            c[k++] = b[i];

        for(i=0;i<k-1;i++){
            for(j=0;j<k-1-i;j++){
                if(c[j] > c[j+1]){
                    temp = c[j];
                    c[j] = c[j+1];
                    c[j+1] = temp;
                }
            }
        }

        printf("\nMerged array after sorting:\n");
        for(i=0;i<k;i++){
            printf("%d ", c[i]);
        }
    }
    else {
        printf("\nInvalid choice");
    }

    return 0;
}

