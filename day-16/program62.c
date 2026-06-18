#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxFreq = 0, element;

    for(i = 0; i < n; i++) {
        int count = 1;

        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j])
                count++;
        }

        if(count > maxFreq) {
            maxFreq = count;
            element = arr[i];
        }
    }

    printf("Maximum Frequency Element = %d\n", element);
    printf("Frequency = %d\n", maxFreq);

    return 0;
}