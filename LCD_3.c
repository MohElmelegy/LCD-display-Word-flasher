
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_Interface.h"
#include "LCD_Interface.h"
#include <avr/io.h>
#include <avr/delay.h>



void main(void)
{
	
	LCD_VidInit ();
      

	while(1)
	{
		LCD_VidSendCommand(0b00000001);
		_delay_ms(2);
		LCD_VidSetPosition(0,4);
		LCD_VidWriteString("Ready 3 ");
		_delay_ms(8000);
		LCD_VidSendCommand(0b00000001);
		_delay_ms(2);
		LCD_VidSetPosition(0,4);
		LCD_VidWriteString("Steady 2 ");
		_delay_ms(8000);
		LCD_VidSendCommand(0b00000001);
		_delay_ms(2);
		LCD_VidSetPosition(0,4);
		LCD_VidWriteString("  Go 1 ");
		_delay_ms(3000);
		LCD_VidSendCommand(0b00000001);
		_delay_ms(2);
	LCD_VidSetPosition(0,0);
	LCD_VidWriteNumber(1);
	LCD_VidSetPosition(1,0);
	LCD_VidWriteNumber(2);	
		_delay_ms(6000);
		LCD_spe_char (0 , 1);
		LCD_spe_char (1 , 1);
		_delay_ms(3000);
		for (u8 i=1; i<17; i++)
		{
			LCD_spe_char (0 , i);
			LCD_spe_char (1 , i);
		}
		LCD_VidSendCommand(0b00000001);
		_delay_ms(2);
		LCD_VidSetPosition(0,3);
		LCD_VidWriteString("Number 1 is ");
		LCD_VidSetPosition(1,5);
		LCD_VidWriteString("Winner ");
		_delay_ms(10000);
		LCD_VidSendCommand(0b00000001);
		_delay_ms(2);
		
		
		
		
	}
}