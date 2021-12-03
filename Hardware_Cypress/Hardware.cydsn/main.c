#include "project.h"
#include <stdbool.h>
bool bandera=0;
unsigned char basico[4]={1,2,4,8};
unsigned char taxi[5]={1,2,4,8,16};
unsigned char cera[6]={1,2,4,8,16,64};
unsigned char motor[5]={1,2,4,8,32};
unsigned char total[7]={1,2,4,8,16,32,64};
unsigned char posicion=0;
bool b_serial=false;
unsigned char caracter=0;

CY_ISR(interruptUART)
{
    caracter=Serial_GetChar();
    Serial_PutChar(caracter);
    b_serial=true;
}
int main(void)
{
    Control_Write(0x00);
    posicion=0;
    CyGlobalIntEnable;
isrUART_StartEx(interruptUART);
Serial_Start();

    for(;;)
    {
        if(b_serial)
        {
            b_serial=false;
            switch(caracter)
            {
                case 'B':
                while(posicion!=4){
                Control_Write(basico[posicion]);
                posicion++;
                CyDelay(2000);
                }
                posicion=0;
                Control_Write(0);
                break;
                case 'T':
                while(posicion!=5){
                Control_Write(taxi[posicion]);
                posicion++;
                CyDelay(2000);
                }
                posicion=0;
                Control_Write(0);
                break;
                case 'C':
                while(posicion!=6){
                Control_Write(cera[posicion]);
                posicion++;
                CyDelay(2000);
                }
                posicion=0;
                Control_Write(0);
                break;
                case 'M':
                while(posicion!=5){
                Control_Write(motor[posicion]);
                posicion++;
                CyDelay(2000);
                }
                posicion=0;
                Control_Write(0);
                break;
                case 'O':
                while(posicion!=7){
                Control_Write(total[posicion]);
                posicion++;
                CyDelay(2000);
                }
                posicion=0;
                Control_Write(0);
                break;
                case 'S':
                Control_Write(posicion);
                break;
                case 'P':
                Control_Write(0x00);
                break;
            } 
        }
    }
}