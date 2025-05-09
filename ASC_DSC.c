#include <xc.h>
#include <stdio.h>

void sortAscending(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sortDescending(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void main() {
    int arr[] = {5, 2, 9, 1, 7};
    int i;
    int n = sizeof(arr) / sizeof(arr[0]);

    sortAscending(arr, n);
    // Now arr is sorted in ascending order: 1, 2, 5, 7, 9

    sortDescending(arr, n);
    // Now arr is sorted in descending order: 9, 7, 5, 2, 1

    // If using PIC, you can send values to PORT for testing
    TRISD = 0;
    for (i = 0; i < n; i++) {
        PORTD = arr[i];
        __delay_ms(500);  // Delay to view each output
    }
}
