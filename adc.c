/***************************************************************************/
/*                                                                         */
/*    A simple program to set port values and output them                  */
/*                                                                         */
/***************************************************************************/


/***  Include Files  *******************************************************/

#include <t89c51ac3.h>
#include "phys340libkeil.h"
#include <string.h>
#include <stdio.h>
#include <math.h>

const char BlankString[] = "                               ";
char outputText [33];
int buff[100];
unsigned int position = 0; //buffer update position
unsigned int inLine = 0; //buffer send position
char * txt = "C";
char buffer[33];

int i; 
float adcValue = 0; 
unsigned int ticks = 0;
//timer 0 is at 1954Hz
unsigned int offTime = 3600;//3686; //Timer0 off time 4000 ticks; * 0.9 *1.024
unsigned int bufferSize = 10; /**if bufferSize = buffer.size() then update it as well*/
//unsigned int timecollab = 0;
/***  Function to sample an analog voltage  ********************************/

void myIntHandler(void) interrupt 1
{
	ticks++;
	P1_3 = ~P1_3;
}

void initTimer(){
	IEN0 = 0x82; /**enable all interrupt bit timer 0 overflow interrupt enable bit 1000 0010*/
	TMOD |= 0x02; /**mode 2 8 bit auto reload 0000 0010* don't override tmod*/
	TH0 = 0x00; 
	
	TCON |= 0x10 ; //start timer 0 doesn't override tcon register level trigger
}


/**return temperature from ADC sample*/

float recalibration(){
	float y;
	y = sampleADC() * -0.1097 + 82.002;
	adcValue = y;
}

/**display Temperature */
void displayTemp(){
	clearLCD();
	recalibration(); //calibrates the system to show adc to temp value 
	sprintf(outputText,"%.2f %c", 	adcValue, 'T');
	setLCDPos(0);
	
	writeLineLCD(outputText);

}

/**  Main Function  ********************************************************/


void main()
{	
	initLCD();
	initTimer();
	initSerial(1200); //1.2kHz baud rate
	 
	while(1){
		if(ticks >= offTime){
			//P1 = 0x01; /** interrupt on*/
			displayTemp();//displays temperature reading 
			buff[position] = sampleADC();
			sprintf(buffer,"%d", buff[position]);
			
			if(readCharSerial() == 'a'){
				for(i = 0; i < bufferSize; i++){
					sprintf(buffer,"%d", buff[i]);
					writeLineSerial(buffer);
				}
			}
			else{writeLineSerial(buffer);} //adcvalue
			
			position++;
			//if(position >= 100){ position =0;} 
		}
		
	}

}

