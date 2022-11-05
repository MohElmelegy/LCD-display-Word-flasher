#ifndef LCD_INTERFACE_H_
#define LCD_INTERFACE_H_

#define DATA_PORT		PORTB    //D0 to D7//
#define CONTROL_PORT	PORTA    //RS, RW, E >>> A0, A1, A2//


void LCD_VidInit(void);
void LCD_VidSendCommand(u8 LOC_u8Command);
void LCD_VidWriteChar(u8 LOC_u8Data);
void LCD_VidWriteString(u8 LOC_u8Data[]);
void LCD_VidWriteNumber(u32 LOC_u8Number);
void LCD_VidSetPosition(u8 LOC_u8Row , u8 LOC_u8Col);




#endif
