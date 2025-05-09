#include <xc.h>

void main() {
    int arr[] = {4, 9, 1, 6, 2};
    int i, j, temp;
    int n = sizeof(arr) / sizeof(arr[0]);

    // Bubble Sort Descending
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

    // Output to PORTD
    TRISD = 0;
    for (i = 0; i < n; i++) {
        PORTD = arr[i];
        __delay_ms(500);  // Requires _XTAL_FREQ
    }

    while (1);
}
