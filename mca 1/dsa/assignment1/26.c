#include <stdio.h>

int main() {
    int a[100], n, key, i, mid, low, high;
    int linearCount = 0, binaryCount = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements (sorted for binary search):\n");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i=0;i<n;i++){
        linearCount++;
        if(a[i] == key){
            break;
        }
    }

    low = 0;
    high = n - 1;

    while(low <= high) {
        binaryCount++;
        mid = (low + high) / 2;

        if(a[mid] == key){
            break;
        }
        else if(key < a[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    printf("\nLinear Search Comparisons: %d", linearCount);
    printf("\nBinary Search Comparisons: %d", binaryCount);

    return 0;
}

