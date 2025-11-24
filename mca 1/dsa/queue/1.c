#include <stdio.h>

int main() {

    int lq[50], cq[50];
    int lf=-1, lr=-1, cf=-1, cr=-1;
    int size, choice, value, i;

    printf("Enter queue size: ");
    scanf("%d", &size);

    do {
        printf("\n\n----- MAIN MENU -----");
        printf("\n1. Linear Queue Enqueue");
        printf("\n2. Linear Queue Dequeue");
        printf("\n3. Linear Queue Display");
        printf("\n4. Circular Queue Enqueue");
        printf("\n5. Circular Queue Dequeue");
        printf("\n6. Circular Queue Display");
        printf("\n7. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            if(lr == size-1)
                printf("Linear Queue Full");
            else {
                printf("Enter value: ");
                scanf("%d", &value);
                if(lf == -1) lf = 0;
                lr++;
                lq[lr] = value;
                printf("%d inserted", value);
            }
        }

        else if(choice == 2) {
            if(lf == -1 || lf > lr)
                printf("Linear Queue Empty");
            else {
                printf("%d deleted", lq[lf]);
                lf++;
            }
        }

        else if(choice == 3) {
            if(lf == -1 || lf > lr)
                printf("Linear Queue Empty");
            else {
                printf("Linear Queue: ");
                for(i = lf; i <= lr; i++)
                    printf("%d ", lq[i]);
            }
        }

        else if(choice == 4) {
            if((cr + 1) % size == cf)
                printf("Circular Queue Full");
            else {
                printf("Enter value: ");
                scanf("%d", &value);
                if(cf == -1)
                    cf = cr = 0;
                else
                    cr = (cr + 1) % size;

                cq[cr] = value;
                printf("%d inserted", value);
            }
        }

        else if(choice == 5) {
            if(cf == -1)
                printf("Circular Queue Empty");
            else {
                printf("%d deleted", cq[cf]);
                if(cf == cr)
                    cf = cr = -1;
                else
                    cf = (cf + 1) % size;
            }
        }

        else if(choice == 6) {
            if(cf == -1)
                printf("Circular Queue Empty");
            else {
                printf("Circular Queue: ");
                i = cf;
                while(1) {
                    printf("%d ", cq[i]);
                    if(i == cr) break;
                    i = (i + 1) % size;
                }
            }
        }

        else if(choice == 7) {
            printf("Exiting...");
        }

        else {
            printf("Invalid Choice");
        }

    } while(choice != 7);

    return 0;
}

