/*
    C library for driving various PHYS340 Microcontroller Peripherals
    Adrian Jongenelen - May 2008
*/

/* General purpose delay (unscaled) */
void delaya(unsigned int time);

/* 
    LCD Functions
    Data = Port 0
    Control = Port 4 
*/
/* Initialise the LCD and resets cursor position to 0 */
void initLCD();

/* Write a single character, incrementing cursor position */
void writeCharLCD(char c);

/* Write an array of character */
void writeLineLCD(char * s);

/* Clear the display and resets cursor position to 0 */
void clearLCD();

/* Get current LCD cursor position (0 -> 31) */
unsigned char getLCDPos();

/* Set cursor to given position (ignores outside 0->31 range) */
void setLCDPos(unsigned char p);

/*
    Keypad Functions
    Plug in to Port 2
*/
/* Take a value from keypad (no button = 0x0D) */
unsigned char sampleKeypad();

/* 
    ADC Functions
    Analogue data input on ADC Bit 0 (Pin 1)
*/
/* Take a 10-bit sample */
int sampleADC();

/*
    Serial Port Functions
*/
/* Initialise the serial port to given baud rate (Uses timer 1) */
void initSerial(unsigned int baud);

/* Write a single character */
void writeCharSerial(char c);

/* Write an array of characters.
   Continues until null (0) character */
void writeLineSerial(char * s);

/* Read a single character (blocking) */
char readCharSerial();

/* Read an array of characters and store result in provided array.
   Keeps blocking until a newline or 'max' characters received.
   Destination array must have size of at least 'max' + 1 */
void readLineSerial(char * s, int max);


