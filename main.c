#include <xc.h>

// ================= CONFIGURATION BITS =================
#pragma config OSC = HS     // High-speed oscillator
#pragma config WDT = OFF    // Watchdog Timer disabled
#pragma config LVP = OFF    // Low Voltage Programming disabled

// ================= MACROS =================
#define LED     LATBbits.LATB0
#define BUTTON  PORTBbits.RB1

// ================= FUNCTION PROTOTYPE =================
void delay_ms(unsigned int ms);

// ================= MAIN FUNCTION =================
void main(void)
{
    // Configure all pins as digital
    ADCON1 = 0x0F;

    // Set pin directions
    TRISBbits.TRISB0 = 0;   // LED as output
    TRISBbits.TRISB1 = 1;   // Button as input

    // Initialize LED state
    LED = 0;

    while(1)
    {
        // Check if button is pressed
        if(BUTTON == 1)
        {
            delay_ms(50);  // Debounce delay

            // Confirm button press
            if(BUTTON == 1)
            {
                LED = !LED;   // Toggle LED

                // Wait until button is released
                while(BUTTON == 1);
            }
        }
    }
}

// ================= DELAY FUNCTION =================
void delay_ms(unsigned int ms)
{
    unsigned int i, j;

    for(i = 0; i < ms; i++)
    {
        for(j = 0; j < 255; j++);
    }
}
