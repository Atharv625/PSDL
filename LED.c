
#include <PIC18F4520.h>
#pragma config OSC = HS
#pragma config WDT = OFF
#pragma config LVP = OFF
#pragma config PBADEN = OFF

void msdelay(unsigned int time);

void main()
{
    INTCON2bits.RBPU = 0;
    ADCON1 = 0x0F;
    TRISD = 0x00;
    while (1)
    {
        PORTD = 0xFF;
        msdelay(250);
        PORTD = 0x00;
        msdelay(250);
    }
}
void msdelay(unsigned int time)
{
    unsigned int i, j;
    for (i = 0; i < time; i++)
        for (j = 0; j < 710; j++)
            ;
}
