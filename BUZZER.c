#include <xc.h>

#define Buzzer LATAbits.LATA5   // Define buzzer pin
unsigned int count = 0;

void __interrupt() Timer1_ISR()
{
    if (TMR1IF && TMR1IE)
    {
        TMR1L = 0x20;
        TMR1H = 0xD1;
        count++;

        if (count >= 1000) // 1 second
        {
            Buzzer = ~Buzzer;   // Toggle buzzer
            count = 0;
        }
        TMR1IF = 0; // Clear interrupt flag
    }
}

void main()
{
    TRISB = 0x00;                // Port B as output
    TRISAbits.TRISA5 = 0;        // RA5 as output
    LATAbits.LATA5 = 0;          // Initially off

    T1CON = 0x31;                // 1:8 prescale, internal clock, Timer1 ON
    TMR1L = 0x20;
    TMR1H = 0xD1;

    TMR1IE = 1;                  // Enable Timer1 interrupt
    TMR1IF = 0;                  // Clear interrupt flag
    PEIE = 1;                    // Enable peripheral interrupt
    GIE = 1;                     // Enable global interrupt

    while (1);
}
