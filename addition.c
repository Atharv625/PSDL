#include <stdio.h>
#include <stdlib.h>
#include <pic18f4550.h>

void main(void)
{
    unsigned char num1, num2, sum;

    num1 = 0xA0;
    num2 = 0x02;
    sum = num1 + num2;

    TRISD = 0;

    while (1)
    {
        PORTD = sum;
    }
}
