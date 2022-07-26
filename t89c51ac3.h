 /*H***************************************************************************
* NAME: T89C51AC3.h           
*----------------------------------------------------------------------------
* PURPOSE: include file for KEIL
*****************************************************************************/
#ifndef _T89C51AC3_H_

#define _T89C51AC3_H_
#define TRUE 1
#define FALSE 0
#define Sfr(x, y)       sfr x = y
#define Sbit(x, y, z)   sbit x = y^z
#define Sfr16(x,y)  sfr16 x = y
#define b(b7,b6,b5,b4,b3,b2,b1,b0) ((b7 << 7)+(b6 << 6)+(b5 << 5)+(b4 << 4)+(b3 << 3)+(b2 << 2)+(b1 << 1)+b0)

/*----------------------------------------*/
/* Include file for 8051 SFR Definitions  */
/*----------------------------------------*/

/*  BYTE Register  */
Sfr (P0 , 0x80);

Sbit (P0_7, 0x80, 7); //added specific bit registers to Port 0 SA
Sbit (P0_6, 0x80, 6); //added specific bit registers to Port 0
Sbit (P0_5, 0x80, 5); //added specific bit registers to Port 0
Sbit (P0_4, 0x80, 4); //added specific bit registers to Port 0
Sbit (P0_3, 0x80, 3); //added specific bit registers to Port 0
Sbit (P0_2, 0x80, 2); //added specific bit registers to Port 0
Sbit (P0_1, 0x80, 1); //added specific bit registers to Port 0
Sbit (P0_0, 0x80, 0); //added specific bit registers to Port 0

Sbit (AD7, 0x80, 7); //added secondary functions to Port 0 SA
Sbit (AD6, 0x80, 6); //added secondary functions to Port 0
Sbit (AD5, 0x80, 5); //added secondary functions to Port 0
Sbit (AD4, 0x80, 4); //added secondary functions to Port 0
Sbit (AD3, 0x80, 3); //added secondary functions to Port 0
Sbit (AD2, 0x80, 2); //added secondary functions to Port 0
Sbit (AD1, 0x80, 1); //added secondary functions to Port 0
Sbit (AD0, 0x80, 0); //added secondary functions to Port 0

Sfr (P1 , 0x90);    

Sbit (P1_7, 0x90, 7);
Sbit (P1_6, 0x90, 6);
Sbit (P1_5, 0x90, 5);
Sbit (P1_4, 0x90, 4);
Sbit (P1_3, 0x90, 3);
Sbit (P1_2, 0x90, 2);
Sbit (P1_1, 0x90, 1);
Sbit (P1_0, 0x90, 0);

Sbit (CEX4, 0x90, 7); //added secondary functions to Port 1
Sbit (CEX3, 0x90, 6); //added secondary functions to Port 1
Sbit (CEX2, 0x90, 5); //added secondary functions to Port 1
Sbit (CEX1, 0x90, 4); //added secondary functions to Port 1
Sbit (CEX0, 0x90, 3); //added secondary functions to Port 1
Sbit (ECI, 0x90, 2); //added secondary functions to Port 1
Sbit (T2EX, 0x90, 1); //added secondary functions to Port 1
Sbit (T2, 0x90, 0); //added secondary functions to Port 1

Sfr (P2 , 0xA0);    

Sbit (P2_7 , 0xA0, 7);
Sbit (P2_6 , 0xA0, 6);
Sbit (P2_5 , 0xA0, 5);
Sbit (P2_4 , 0xA0, 4);
Sbit (P2_3 , 0xA0, 3);
Sbit (P2_2 , 0xA0, 2);
Sbit (P2_1 , 0xA0, 1);
Sbit (P2_0 , 0xA0, 0);

Sbit (A15 , 0xA0, 7); //added secondary functions to Port 2 SA
Sbit (A14 , 0xA0, 6); //added secondary functions to Port 2
Sbit (A13 , 0xA0, 5); //added secondary functions to Port 2
Sbit (A12 , 0xA0, 4); //added secondary functions to Port 2
Sbit (A11 , 0xA0, 3); //added secondary functions to Port 2
Sbit (A10 , 0xA0, 2); //added secondary functions to Port 2
Sbit (A9 , 0xA0, 1); //added secondary functions to Port 2
Sbit (A8 , 0xA0, 0); //added secondary functions to Port 2


Sfr (P3 , 0xB0);    

Sbit (P3_7 , 0xB0, 7);
Sbit (P3_6 , 0xB0, 6);
Sbit (P3_5 , 0xB0, 5);
Sbit (P3_4 , 0xB0, 4);
Sbit (P3_3 , 0xB0, 3);
Sbit (P3_2 , 0xB0, 2);
Sbit (P3_1 , 0xB0, 1);
Sbit (P3_0 , 0xB0, 0);

Sbit (RD , 0xB0, 7);
Sbit (WR , 0xB0, 6);
Sbit (T1 , 0xB0, 5);
Sbit (T0 , 0xB0, 4);
Sbit (INT1, 0xB0, 3);
Sbit (INT0, 0xB0, 2);
Sbit (TXD , 0xB0, 1);
Sbit (RXD , 0xB0, 0);

Sfr (P4 , 0xC0);    

Sbit (P4_4 , 0xC0, 4); //added specific bit registers to Port 4 SA
Sbit (P4_3 , 0xC0, 3); //added specific bit registers to Port 4 SA
Sbit (P4_2 , 0xC0, 2); //added specific bit registers to Port 4 SA
Sbit (P4_1 , 0xC0, 1); //added specific bit registers to Port 4 SA
Sbit (P4_0 , 0xC0, 0); //added specific bit registers to Port 4 SA

Sbit (MISO , 0xC0, 4); //added second functions to Port 4 SA
Sbit (SCK , 0xC0, 3); //added second functions to Port 4 SA
Sbit (MOSI , 0xC0, 2); //added second functions to Port 4 SA

Sfr (PSW , 0xD0);   

Sbit (CY  , 0xD0, 7);
Sbit (AC  , 0xD0, 6);
Sbit (F0  , 0xD0, 5);
Sbit (RS1 , 0xD0, 4);
Sbit (RS0 , 0xD0, 3);
Sbit (OV  , 0xD0, 2);
Sbit (F1  , 0xD0, 1); //was F1 changed because of SFR Mapping in Datasheet
Sbit (P   , 0xD0, 0);

Sfr (ACC , 0xE0);
Sbit (ACC7 , 0xE0, 7); //added specific bit registers for Accumulator
Sbit (ACC6 , 0xE0, 6); //added specific bit registers for Accumulator
Sbit (ACC5 , 0xE0, 5); //added specific bit registers for Accumulator
Sbit (ACC4 , 0xE0, 4); //added specific bit registers for Accumulator
Sbit (ACC3 , 0xE0, 3); //added specific bit registers for Accumulator
Sbit (ACC2 , 0xE0, 2); //added specific bit registers for Accumulator
Sbit (ACC1 , 0xE0, 1); //added specific bit registers for Accumulator
Sbit (ACC0 , 0xE0, 0); //added specific bit registers for Accumulator

Sfr (B , 0xF0); 
Sbit (B7 , 0xF0, 7); //added specific bit registers for B register
Sbit (B6 , 0xF0, 6); //added specific bit registers for B register
Sbit (B5 , 0xF0, 5); //added specific bit registers for B register
Sbit (B4 , 0xF0, 4); //added specific bit registers for B register
Sbit (B3 , 0xF0, 3); //added specific bit registers for B register
Sbit (B2 , 0xF0, 2); //added specific bit registers for B register
Sbit (B1 , 0xF0, 1); //added specific bit registers for B register
Sbit (B0 , 0xF0, 0); //added specific bit registers for B register

Sfr (SP , 0x81);    
Sfr (DPL , 0x82);   
Sfr (DPH , 0x83);   

Sfr (PCON , 0x87);
//Sbit (SMOD1 , 0x87, 7); //added specific bit registers 
//Sbit (SMOD0 , 0x87, 6); //added specific bit registers 
//Sbit (B5 , 0x87, 5); //added specific bit registers 
//Sbit (POF , 0x87, 4); //added specific bit registers 
//Sbit (GF1 , 0x87, 3); //added specific bit registers 
//Sbit (GF0 , 0x87, 2); //added specific bit registers 
//Sbit (PD , 0x87, 1); //added specific bit registers 
//Sbit (IDL , 0x87, 0); //added specific bit registers 

Sfr (CKCON , 0x8F); 
Sbit (WDX2 , 0x90, 6); //added specific bit registers SEP1
Sbit (PCAX2 , 0x90, 5); //added specific bit registers
Sbit (SIX2 , 0x90, 4); //added specific bit registers
Sbit (T2X2  , 0x90, 3); //added specific bit registers
Sbit (T1X2 , 0x90, 2); //added specific bit registers
Sbit (T0X2 , 0x90, 1); //added specific bit registers
Sbit (X2 , 0x90, 0); //added specific bit registers

/*------------------ TIMERS registers ---------------------*/
Sfr (TCON , 0x88);
Sbit (TF1 , 0x88, 7);
Sbit (TR1 , 0x88, 6);
Sbit (TF0 , 0x88, 5);
Sbit (TR0 , 0x88, 4);
Sbit (IE1 , 0x88, 3);
Sbit (IT1 , 0x88, 2);
Sbit (IE0 , 0x88, 1);
Sbit (IT0 , 0x88, 0);
    
Sfr (TMOD , 0x89);
//Sbit (GATE1 , 0x89, 7);//SEP1
//Sbit (C_T1 , 0x89, 6);//
//Sbit (M11 , 0x89, 5);//
//Sbit (M01 , 0x89, 4);//
//Sbit (GATE0 , 0x89, 3);//
//Sbit (C_T0 , 0x89, 2);//
//Sbit (M10 , 0x89, 1);//
//Sbit (M00 , 0x89, 0);//

Sfr  (T2CON , 0xC8);
Sbit (TF2   , 0xC8, 7);
Sbit (EXF2  , 0xC8, 6);
Sbit (RCLK  , 0xC8, 5);
Sbit (TCLK  , 0xC8, 4);
Sbit (EXEN2 , 0xC8, 3);
Sbit (TR2   , 0xC8, 2);
Sbit (C_T2  , 0xC8, 1);
Sbit (CP_RL2, 0xC8, 0);
    
Sfr (T2MOD , 0xC9); 
Sfr (TL0 , 0x8A);   
Sfr (TL1 , 0x8B);   
Sfr (TL2 , 0xCC);   
Sfr (TH0 , 0x8C);   
Sfr (TH1 , 0x8D);   
Sfr (TH2 , 0xCD);   
Sfr (RCAP2L , 0xCA);    
Sfr (RCAP2H , 0xCB);    
Sfr (WDTRST , 0xA6);    
Sfr (WDTPRG , 0xA7);    


/*------------------- UART registers ------------------------*/
Sfr (SCON , 0x98);  
Sbit (SM0  , 0x98, 7);
Sbit (FE   , 0x98, 7);
Sbit (SM1  , 0x98, 6);
Sbit (SM2  , 0x98, 5);
Sbit (REN  , 0x98, 4);
Sbit (TB8  , 0x98, 3);
Sbit (RB8  , 0x98, 2);
Sbit (TI   , 0x98, 1);
Sbit (RI   , 0x98, 0);

Sfr (SBUF , 0x99);  
Sfr (SADEN , 0xB9); 
Sfr (SADDR , 0xA9); 

/*-------------------- ADC registers ----------------------*/
Sfr (ADCLK , 0xF2); 
Sfr (ADCON , 0xF3); 
#define MSK_ADCON_PSIDLE 0x40
#define MSK_ADCON_ADEN   0x20
#define MSK_ADCON_ADEOC  0x10
#define MSK_ADCON_ADSST  0x08
#define MSK_ADCON_SCH    0x07
Sfr (ADDL , 0xF4);  
#define MSK_ADDL_UTILS   0x03 //was UTILS
Sfr (ADDH , 0xF5);  
Sfr (ADCF , 0xF6);  

/*-------------------- FLASH EEPROM registers ------------*/
Sfr (FCON  , 0xD1); 
#define MSK_FCON_FBUSY 0x01
#define MSK_FCON_FMOD  0x06
#define MSK_FCON_FPS   0x08
#define MSK_FCON_FPL   0xF0
Sfr (EECON  , 0xD2);    
#define MSK_EECON_EEBUSY 0x01
#define MSK_EECON_EEE    0x02
#define MSK_EECON_EEPL   0xF0
Sfr (AUXR  , 0x8E); 
#define MSK_AUXR_M0      0x20
Sfr (AUXR1  , 0xA2);    
#define MSK_AUXR1_ENBOOT 0x20
/*-------------------- IT registers -----------------------*/
Sfr (IPL1 , 0xF8);  
Sbit (PADCL , 0XF8, 1); //added single bit to Interrupt Priority low 1

Sfr (IPH1 , 0xF7);  
Sfr (IEN0  , 0xA8); 

Sfr (IPL0 , 0xB8);  
Sbit (PPC , 0xB8, 6); //added specific bit registers to Port 0
Sbit (PT2 , 0xB8, 5); //added specific bit registers to Port 0
Sbit (PS , 0xB8, 4); //added specific bit registers to Port 0
Sbit (PT1 , 0xB8, 3); //added specific bit registers to Port 0
Sbit (PX1 , 0xB8, 2); //added specific bit registers to Port 0
Sbit (PT0 , 0xB8, 1); //added specific bit registers to Port 0
Sbit (PX0 , 0xB8, 0); //added specific bit registers to Port 0

Sfr (IPH0 , 0xB7);  
Sfr (IEN1 , 0xE8);  

/*-------------------SPI registers ----------------------*/
Sfr (SPCON , 0XD4); // added these registers as per Jason's modification
//Sbit (SPR2 , 0xD4, 7); //added specific bit registers for SPCON
//Sbit (SPEN , 0xD4, 6); //added specific bit registers to SPCON 
//Sbit (SSDIS , 0xD4, 5); //added specific bit registers to SPCON 
//Sbit (MSTR , 0xD4, 4); //added specific bit registers to SPCON 
//Sbit (CPOL , 0xD4, 3); //added specific bit registers to SPCON 
//Sbit (CPHA , 0xD4, 2); //added specific bit registers to SPCON 
//Sbit (SPR1 , 0xD4, 1); //added specific bit registers to SPCON 
//Sbit (SPR0 , 0xD4, 0); //added specific bit registers to SPCON 

Sfr (SPSCR , 0XD5); // added these registers as per Jason's modification 
//Sbit (SPIF , 0xD5, 7); //added specific bit registers for SPSCR
//Sbit (OVR , 0xD5, 5); //added specific bit registers to SPSCR 
//Sbit (MODF , 0xD5, 4); //added specific bit registers to SPSCR 
//Sbit (SPTE , 0xD5, 3); //added specific bit registers to SPSCR 
//Sbit (UARTM , 0xD5, 2); //added specific bit registers to SPSCR 
//Sbit (SPTEIE , 0xD5, 1); //added specific bit registers to SPSCR 
//Sbit (MOFIE , 0xD5, 0); //added specific bit registers to SPSCR 

Sfr (SPDAT , 0XD6); // added these registers as per Jason's modification

/*  IEN0  */
Sbit (EA   , 0xA8, 7);
Sbit (EC   , 0xA8, 6);
Sbit (ET2  , 0xA8, 5);
Sbit (ES   , 0xA8, 4);
Sbit (ET1  , 0xA8, 3);
Sbit (EX1  , 0xA8, 2);
Sbit (ET0  , 0xA8, 1);
Sbit (EX0  , 0xA8, 0);

/*  IEN1  */
Sbit (EADC , 0xE8, 1);

/*--------------------- PCA registers --------------------*/
Sfr (CCON , 0xD8);  
Sbit(CF  , 0xD8, 7);
Sbit(CR  , 0xD8, 6);
Sbit(CCF4, 0xD8, 4);
Sbit(CCF3, 0xD8, 3);
Sbit(CCF2, 0xD8, 2);
Sbit(CCF1, 0xD8, 1);
Sbit(CCF0, 0xD8, 0);

Sfr (CMOD , 0xD9);  
Sfr (CH , 0xF9);    
Sfr (CL , 0xE9);    
Sfr (CCAP0H  , 0xFA);   
Sfr (CCAP0L  , 0xEA);   
Sfr (CCAPM0  , 0xDA);   
Sfr (CCAP1H  , 0xFB);   
Sfr (CCAP1L  , 0xEB);   
Sfr (CCAPM1  , 0xDB);   
Sfr (CCAP2H  , 0xFC);   
Sfr (CCAP2L  , 0xEC);   
Sfr (CCAPM2  , 0xDC);   
Sfr (CCAP3H  , 0xFD);   
Sfr (CCAP3L  , 0xED);   
Sfr (CCAPM3  , 0xDD);   
Sfr (CCAP4H  , 0xFE);   
Sfr (CCAP4L  , 0xEE);   
Sfr (CCAPM4  , 0xDE);   

#define RESET 0
#define EXTINTO 0x03
#define TIMER0 0x0B
#define EXTINT1 0x13
#define TIMER1  0x1B
#define SERIAL 0x23
#define TIMER2 0x2B
#define PCA 0x33
#define ADC 0x43
#define SPI 0x53

#endif  
