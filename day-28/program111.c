#include <stdio.h>

int main() {
    int seats = 10, choice;

    do {
        printf("\n--- Ticket Booking System ---\n");
        printf("1. Book Ticket\n");
        printf("2. Check Available Seats\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(seats > 0) {
                    seats--;
                    printf("Ticket Booked Successfully\n");
                } else {
                    printf("No Seats Available\n");
                }
                break;

            case 2:
                printf("Available Seats: %d\n", seats);
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