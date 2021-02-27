/*  
Blink Demo for the FRDM-K22F Freedom Development Board
using the MK22FN512xxx12 MCU.  Program will blink the onboard 3 color
LED in a repeating pattern.

Written by Thomas Holecek on 2/19/2021

version 1.0  Initial Code

*/

#include "MK22F10.h"

void InitLED(void);
void delayMS(int delay);

int main(void)
{


     while(1)
     {
     
     
     }


}



void InitLED(void)
{
	SIM->SCGC5 |= 0x400; //Clock Gate On PORTB
	PORTB->PCR[19] = 0x0100;  //Mux set to GPIO (Alt1)
        PTB->PDDR |= 0x80000;  //Set line 19 to write
	PORTB->PCR[18] = 0x100;
	PTB->PDDR |= 0x40000;  //Set line 18 to write
	SIM->SCGC5 |= 0x1000; //Clock Gate On PORTD
	PORTD->PCR[1] = 0x0100;  //Mux set to GPIO (Alt1)
        PTD->PDDR |= 0x02;  //Set line 1 to write

}

void delayMS(int delay)
{
	for(int i=0;i<delay;i++)
	{
		for(int j=0;j<7000;j++){}
	}
}
