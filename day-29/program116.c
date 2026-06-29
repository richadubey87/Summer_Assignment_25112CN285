#include <stdio.h>

int main() {
    char item[20][50];
    int qty[20];
    int count = 0, choice, i;

    do {
        printf("\n--- Inventory Management System ---\n");
        printf("1. Add Item\n");
        printf("2. View Inventory\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice) {
            case 1:
                printf("Enter Item Name: ");
                gets(item[count]);
                printf("Enter Quantity: ");
                scanf("%d", &qty[count]);
                getchar();
                count++;
                printf("Item Added Successfully\n");
                break;

            case 2:
                printf("\nInventory List:\n");
                for(i = 0; i < count; i++)
                    printf("%d. %s - %d\n", i + 1, item[i], qty[i]);
                break;

            case 3:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice\n");
        }
    } while(choice != 3);

    return 0;
}