#include <stdio.h>

int main() {
    int a[100], n, i;
    int *p, max1, max2, min1, min2, posMax2, posMin2;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    p = a;

    max1 = max2 = -99999;
    min1 = min2 = 99999;

    for(i=0;i<n;i++){
        if(*(p+i) > max1){
            max2 = max1;
            max1 = *(p+i);
            posMax2 = i;
        } else if(*(p+i) > max2 && *(p+i) != max1){
            max2 = *(p+i);
            posMax2 = i;
        }

        if(*(p+i) < min1){
            min2 = min1;
            min1 = *(p+i);
            posMin2 = i;
        } else if(*(p+i) < min2 && *(p+i) != min1){
            min2 = *(p+i);
            posMin2 = i;
        }
    }

    int temp = *(p + posMax2);
    *(p + posMax2) = *(p + posMin2);
    *(p + posMin2) = temp;

    printf("\nArray after interchange:\n");
    for(i=0;i<n;i++){
        printf("%d ", *(p+i));
    }

    return 0;
}

