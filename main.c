/*
 * main.c
 */
#include <msp430g2211.h>
#define LED BIT4+BIT0
void delayMS(unsigned int ms )							// MS delay function
{
    unsigned int i;
    for (i = 0; i<= ms; i++)
       __delay_cycles(2000);
}
void main(void) {
	
	  WDTCTL = WDTPW + WDTHOLD;
	  P1DIR |= LED;
	  P1OUT=0x00;
	  while(1)
	  {
		  P1OUT^= LED;
		  delayMS(500);
	  }
}
