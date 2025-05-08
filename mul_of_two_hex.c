#include <stdio.h>
#include <stdlib.h>
#include <PIC18F4550.h>

void main(void)
{
    unsigned char num1, num2, pro;

    num1 = 0x08;
    num2 = 0x02;
    pro = num1 * num2;

    TRISD = 0;

    while (1)
    {
        PORTD = pro;
    }
}
