#include <stdio.h>
#include <stdlib.h>
#include <PIC18F4550.h>

void main(void)
{
    int num1, num2;
    int result;
    result = 0;
    num1 = 0x23;
    num2 = 0x10;

    while (num1 >= num2)
    {
        num1 = num1 - num2;
        result++;
    }

    TRISD = 0;
    PORTD = result; // Assign the value of result to PORTD
}
