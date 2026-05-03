#include <xc.h>

// Configuration bits
#pragma config OSC = HS
#pragma config WDT = OFF
#pragma config LVP = OFF

#define LED LATBbits.LATB0
#define BUTTON PORTBbits.RB1

void delay()
{
    for(int i = 0; i < 30000; i++);
}

void main()
{
    TRISBbits.TRISB0 = 0; // LED as output
    TRISBbits.TRISB1 = 1; // Button as input

    LED = 0; // Initially OFF

    while(1)
    {
        if(BUTTON == 1)
        {
            delay(); // debounce

            if(BUTTON == 1) // confirm press
            {
                LED = !LED; // toggle LED

                while(BUTTON == 1); // wait until button release
            }
        }
    }
}
