#include <stdio.h>

int main() {
    int arr[100], n, i, choice, sum = 0, max;

    printf("Enter Number of Elements: ");
    scanf("%d", &n);

    printf("Enter Elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    do {
        printf("\n--- Array Operations ---\n");
        printf("1. Display Array\n");
        printf("2. Sum of Elements\n");
        printf("3. Find Maximum\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                for(i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                printf("\n");
                break;

            case 2:
                sum = 0;
                for(i = 0; i < n; i++)
                    sum += arr[i];
                printf("Sum = %d\n", sum);
                break;

            case 3:
                max = arr[0];
                for(i = 1; i < n; i++)
                    if(arr[i] > max)
                        max = arr[i];
                printf("Maximum = %d\n", max);
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