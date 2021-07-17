sbit LCD_RS at RC2_bit;
sbit LCD_EN at RC3_bit;
sbit LCD_D4 at RC4_bit;
sbit LCD_D5 at RC5_bit;
sbit LCD_D6 at RC6_bit;
sbit LCD_D7 at RC7_bit;
sbit LCD_RS_Direction at TRISC2_bit;
sbit LCD_EN_Direction at TRISC3_bit;
sbit LCD_D4_Direction at TRISC4_bit;
sbit LCD_D5_Direction at TRISC5_bit;
sbit LCD_D6_Direction at TRISC6_bit;
sbit LCD_D7_Direction at TRISC7_bit;

void main() {
    TRISB = 0;
   TRISD = 1;
   PORTB=0;
   PORTD=0;
   do{
   if(PORTD.F4==1 && PORTD.F5==1)
   {
   
   if(PORTD.F0==1 )
   {
   Lcd_Init();
   Lcd_Cmd(_LCD_CLEAR);
   Lcd_Cmd(_LCD_CURSOR_OFF);
   Lcd_Out(1,1,"WOOL");

   PORTB.F0=1;
   delay_ms(20000);
   PORTB.F0=0;
    delay_ms(200);
    PORTB.F1=1;
    delay_ms(20000);
    PORTB.F1=0;
    delay_ms(200);
    PORTB.F0=1;
    delay_ms(20000);
    PORTB.F0=0;
    delay_ms(200);
   }
   if(PORTD.F1==1)
   {
    Lcd_Init();
   Lcd_Cmd(_LCD_CLEAR);
   Lcd_Cmd(_LCD_CURSOR_OFF);
   Lcd_Out(1,1,"SILK");
   
   PORTB.F1=1;
   delay_ms(20000);
   PORTB.F1=0;
   delay_ms(200);
   PORTB.F0=1;
   delay_ms(20000);
   PORTB.F0=0;
   delay_ms(200);
   }
   if(PORTD.F6==1)
   {
    Lcd_Init();
   Lcd_Cmd(_LCD_CLEAR);
   Lcd_Cmd(_LCD_CURSOR_OFF);
   Lcd_Out(1,1,"COTTON");
   
   PORTB.F1=1;
   delay_ms(20000);
   PORTB.F1=0;
   delay_ms(200);
   PORTB.F0=1;
   delay_ms(20000);
   PORTB.F0=0;
   delay_ms(200);
   }
   }
} while(1);
}