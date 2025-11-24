#include <stdio.h>

int main() {
    int a[100], n, i, pos, value, choice;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    do {
        printf("\n\nMENU");
        printf("\n1. Insert at start");
        printf("\n2. Insert at end");
        printf("\n3. Insert at middle");
        printf("\n4. Delete from start");
        printf("\n5. Delete from end");
        printf("\n6. Delete from middle");
        printf("\n7. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                for(i=n;i>0;i--)
                    a[i] = a[i-1];
                a[0] = value;
                n++;
                break;

            case 2:
                printf("Enter value: ");
                scanf("%d", &value);
                a[n] = value;
                n++;
                break;

            case 3:
                printf("Enter position: ");
                scanf("%d", &pos);
                printf("Enter value: ");
                scanf("%d", &value);
                for(i=n;i>pos;i--)
                    a[i] = a[i-1];
                a[pos] = value;
                n++;
                break;

            case 4:
                for(i=0;i<n-1;i++)
                    a[i] = a[i+1];
                n--;
                break;

            case 5:
                n--;
                break;

            case 6:
                printf("Enter position: ");
                scanf("%d", &pos);
                for(i=pos;i<n-1;i++)
                    a[i] = a[i+1];
                n--;
                break;

            case 7:
                break;

            default:
                printf("Invalid choice.");
        }

        if(choice != 7) {
            printf("\nUpdated array:\n");
            for(i=0;i<n;i++){
                printf("%d ", a[i]);
            }
        }

    } while(choice != 7);

    return 0;
}

