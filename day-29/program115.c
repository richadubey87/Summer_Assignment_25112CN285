#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice;

    printf("Enter String: ");
    gets(str1);

    do {
        printf("\n--- String Operations ---\n");
        printf("1. Find Length\n");
        printf("2. Reverse String\n");
        printf("3. Copy String\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Length = %lu\n", strlen(str1));
                break;

            case 2:
                strcpy(str2, str1);
                strrev(str2);
                printf("Reverse = %s\n", str2);
                break;

            case 3:
                strcpy(str2, str1);
                printf("Copied String = %s\n", str2);
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