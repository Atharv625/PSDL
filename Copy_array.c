#include <xc.h>

#define _XTAL_FREQ 8000000

void main() {
    int source[] = {1, 2, 3, 4, 5};
    int destination[5];
    int i;

    for (i = 0; i < 5; i++) {
        destination[i] = source[i];  // Copy each element
    }

    TRISD = 0x00;          // Set PORTD as output
    PORTD = destination[4]; // Example: output the last copied element

    while (1);
}
