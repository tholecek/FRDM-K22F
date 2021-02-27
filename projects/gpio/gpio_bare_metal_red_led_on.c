

int  main(void){
	
	//Step 1: Turn on clock gate for port A
	(*((volatile unsigned int*) 0x40048038)) |=0x0200; 
	
	//Step 2: Use port control to set the port function to GPIO
	//Port A pin 1 is an atomic register so you must write the entire register
	//entry to make the register value change.
	//(*((volatile unsigned int*) 0x40049004)) = (((*((volatile unsigned int*) 0x40049004))& ~0x700) | (0x100 & 0x700));
	(*((volatile unsigned int*) 0x40049004)) = 0x100;
	
	//Step  3:  Set Port A pin 1 to be an output
	(*((volatile unsigned int*) 0x400FF014)) |=0x02;
	
	//Step 4: Turn Port A pin 1 bit to 0 to turn red led on
	(*((volatile unsigned int*) 0x400FF008)) |=0x02;
	
	
}
