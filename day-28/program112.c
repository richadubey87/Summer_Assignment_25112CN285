#include <stdio.h>
#include <string.h>

int main() {
    char contact[20][50], search[50];
    int count = 0, choice, i, found;

    do {
        printf("\n--- Contact Management System ---\n");
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice) {
            case 1:
                printf("Enter Contact Name: ");
                gets(contact[count]);
                count++;
                printf("Contact Added Successfully\n");
                break;

            case 2:
                printf("\nContact List:\n");
                for(i = 0; i < count; i++)
                    printf("%d. %s\n", i + 1, contact[i]);
                break;

            case 3:
                printf("Enter Contact Name: ");
                gets(search);
                found = 0;
                for(i = 0; i < count; i++) {
                    if(strcmp(contact[i], search) == 0) {
                        found = 1;
                        break;
                    }
                }
                if(found)
                    printf("Contact Found\n");
                else
                    printf("Contact Not Found\n");
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 4);

    return 0;
}