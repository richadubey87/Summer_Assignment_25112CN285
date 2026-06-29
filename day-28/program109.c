#include <stdio.h>
#include <string.h>

int main() {
    char books[20][50], search[50];
    int count = 0, choice, i, found;

    do {
        printf("\n--- Library Management System ---\n");
        printf("1. Add Book\n");
        printf("2. View Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice) {
            case 1:
                printf("Enter Book Name: ");
                gets(books[count]);
                count++;
                printf("Book Added Successfully!\n");
                break;

            case 2:
                printf("\nBook List:\n");
                for(i = 0; i < count; i++)
                    printf("%d. %s\n", i + 1, books[i]);
                break;

            case 3:
                printf("Enter Book Name: ");
                gets(search);
                found = 0;
                for(i = 0; i < count; i++) {
                    if(strcmp(books[i], search) == 0) {
                        found = 1;
                        break;
                    }
                }
                if(found)
                    printf("Book Found\n");
                else
                    printf("Book Not Found\n");
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