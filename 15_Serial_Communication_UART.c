#include<reg51.h>
void main(void)
{
	TMOD = 0x20; 				//Timer 1 8 bit auto reload mode
	TH1 = 0xFA;					//baudrate 4800
	SCON = 0x50; 				//Serial control register Mode1 with reception enable
	TR1 = 1;
	while(1)
	{
		SBUF = 'A';				//Sending data to PORT but only one byte at a time use with array for more bytes
		while(TI == 0);
		TI = 0;
	}
}