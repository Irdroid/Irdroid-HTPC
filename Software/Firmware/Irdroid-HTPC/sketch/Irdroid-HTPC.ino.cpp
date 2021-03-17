#include <Arduino.h>
#line 1 "C:\\Users\\bakalski\\Documents\\GitHub\\Irdroid-HTPC\\Software\\Firmware\\Irdroid-HTPC\\Irdroid-HTPC.ino"
#line 1 "C:\\Users\\bakalski\\Documents\\GitHub\\Irdroid-HTPC\\Software\\Firmware\\Irdroid-HTPC\\Irdroid-HTPC.ino"
// **** TSOP is connected to port PB2 **** //////
#define REPEAT_DELAY 150
#include <EEPROM.h>
//Set to 0 after finding your codes
bool DEBUG = false;

//Specify your remote codes here:

uint32_t REMOTE_UP = 0;
uint32_t REMOTE_DOWN = 0;
uint32_t REMOTE_LEFT = 0;
uint32_t REMOTE_RIGHT = 0;
uint32_t REMOTE_OK=0;
uint32_t REMOTE_RETURN =0;
uint32_t REMOTE_PLAY =0;
uint32_t REMOTE_NEXT =0;
uint32_t REMOTE_PREVIOUS =0;


unsigned int counter = 0;

// Variables will change:
int buttonPushCounter = 0;   // counter for the number of button presses
int buttonState = 0;         // current state of the button
int lastButtonState = 0;     // previous state of the button





volatile uint8_t m = 0, tcnt = 0, startflag = 0;
uint32_t irdata = 0, keydata = 0 ;
uint32_t key_tmp = 0;
bool pressed = false;
bool complete = false;
unsigned int count;
#include <avr/delay.h>
#include "TrinketHidCombo.h"

#line 40 "C:\\Users\\bakalski\\Documents\\GitHub\\Irdroid-HTPC\\Software\\Firmware\\Irdroid-HTPC\\Irdroid-HTPC.ino"
long EEPROMReadlong(int address);
#line 49 "C:\\Users\\bakalski\\Documents\\GitHub\\Irdroid-HTPC\\Software\\Firmware\\Irdroid-HTPC\\Irdroid-HTPC.ino"
void EEPROMWritelong(int address, uint32_t value);
#line 64 "C:\\Users\\bakalski\\Documents\\GitHub\\Irdroid-HTPC\\Software\\Firmware\\Irdroid-HTPC\\Irdroid-HTPC.ino"
void setup();
#line 96 "C:\\Users\\bakalski\\Documents\\GitHub\\Irdroid-HTPC\\Software\\Firmware\\Irdroid-HTPC\\Irdroid-HTPC.ino"
void loop();
#line 190 "C:\\Users\\bakalski\\Documents\\GitHub\\Irdroid-HTPC\\Software\\Firmware\\Irdroid-HTPC\\Irdroid-HTPC.ino"
void ms_delay(uint16_t x);
#line 198 "C:\\Users\\bakalski\\Documents\\GitHub\\Irdroid-HTPC\\Software\\Firmware\\Irdroid-HTPC\\Irdroid-HTPC.ino"
void Action(uint32_t keycode);
#line 40 "C:\\Users\\bakalski\\Documents\\GitHub\\Irdroid-HTPC\\Software\\Firmware\\Irdroid-HTPC\\Irdroid-HTPC.ino"
long EEPROMReadlong(int address) {
  long four = EEPROM.read(address);
  long three = EEPROM.read(address + 1);
  long two = EEPROM.read(address + 2);
  long one = EEPROM.read(address + 3);

  return ((four << 0) & 0xFF) + ((three << 8) & 0xFFFF) + ((two << 16) & 0xFFFFFF) + ((one << 24) & 0xFFFFFFFF);
}

void EEPROMWritelong(int address, uint32_t value) {
  byte four = (value & 0xFF);
  byte three = ((value >> 8) & 0xFF);
  byte two = ((value >> 16) & 0xFF);
  byte one = ((value >> 24) & 0xFF);
 
  EEPROM.write(address, four);
  EEPROM.write(address + 1, three);
  EEPROM.write(address + 2, two);
  EEPROM.write(address + 3, one);
}




void setup() {
  //delay(30000);
  pinMode(0, INPUT_PULLUP);
  count = 9;
   REMOTE_UP = EEPROMReadlong(70);
   REMOTE_DOWN = EEPROMReadlong(75);
   REMOTE_LEFT = EEPROMReadlong(80);
   REMOTE_RIGHT = EEPROMReadlong(85);
   REMOTE_OK = EEPROMReadlong(90);
   REMOTE_RETURN = EEPROMReadlong(95);
   REMOTE_PLAY = EEPROMReadlong(100);

   REMOTE_NEXT = EEPROMReadlong(110);
   REMOTE_PREVIOUS = EEPROMReadlong(115);
  DDRB |= (1 << DDB1); //P1 (LED) OUT not used in sketch
  PORTB |= 1 << PB2; // a PB2 lift will not hurt.
   PCMSK = (1<<PCINT3) | (1<<PCINT4);
  // Enable PCINT interrupts
  GIMSK = (1<<PCIE);
  GIMSK |= 1 << INT0; //interrupt int0 enable
   sei();
  MCUCR |= 1 << ISC00; //Any logical change on INT0 generates an interrupt request
  GTCCR |= 1 << PSR0; TCCR0A = 0;
  TCCR0B = (1 << CS02) | (1 << CS00); // divider /1024
  TIMSK = 1 << TOIE0; //interrupt Timer/Counter1 Overflow  enable
  TrinketHidCombo.begin(); // start the USB device engine and enumerate

 
  
   
}

void loop() {
  


   buttonState = digitalRead(0);
   
     // compare the buttonState to its previous state
  if (buttonState != lastButtonState) {
    // if the state has changed, increment the counter
    if (buttonState == LOW) {
      
  
    DEBUG = true;
      // if the current state is HIGH then the button went from off to on:
      buttonPushCounter++;

      
        count--;
   
    
  // TrinketHidCombo.println(count);
     
    } else {
      // if the current state is LOW then the button went from on to off:
    
      DEBUG = false;
     
     
    
       
        
    }
    // Delay a little bit to avoid bouncing
    delay(50);
  }
  // save the current state as the last state, for next time through the loop
  lastButtonState = buttonState;
      
  if (complete) { // if a code has been received
    
    key_tmp = 0;
   
    if (keydata != 0) //if a code is new
    {
      Action(keydata);
      pressed = true;
    }

       
    
   //  TrinketHidCombo.mouseMove(lastMouseX, lastMouseY, 0);

    complete = false;
    ms_delay(REPEAT_DELAY);// to balance repeating/input delay of the remote

  }
  else if (pressed)
  {
    digitalWrite(1, LOW);
   
      TrinketHidCombo.pressKey(0, 0);
    pressed = false;
  }
  else
  {
    _delay_ms(1);//restrain USB polling on empty cycles
    TrinketHidCombo.poll(); // check if USB needs anything done
  }

}

ISR (INT0_vect) {
  if (PINB & 1 << 2) { // If log1
    TCNT0 = 0;
  }
  else {
    tcnt = TCNT0; // If log0
    if (startflag) {
      if (30 > tcnt  && tcnt > 2) {
        if (tcnt > 15 && m < 32) {
          irdata |= (2147483648 >> m);
        }
        m++;
      }
    }
    else  startflag = 1;
  }
}
ISR (TIMER0_OVF_vect) {
  if (m)
    complete = true; m = 0; startflag = 0; keydata = irdata; irdata = 0; // if the index is not 0, then create an end flag
   
}

void ms_delay(uint16_t x) // USB polling delay function
{
  for (uint16_t m = 0; m < (x / 10); m++) {
    _delay_ms(10);
    TrinketHidCombo.poll();
  }
}

void Action(uint32_t keycode)
{
 
  if(keycode == REMOTE_UP && !DEBUG ){
    TrinketHidCombo.pressKey(0, KEYCODE_ARROW_UP);
    digitalWrite(1, HIGH);
    return;
  }
  if(keycode == REMOTE_DOWN && !DEBUG){
    TrinketHidCombo.pressKey(0, KEYCODE_ARROW_DOWN);
     digitalWrite(1, HIGH);
    return;
  }
  if(keycode == REMOTE_LEFT && !DEBUG){
    TrinketHidCombo.pressKey(0, KEYCODE_ARROW_LEFT);
     digitalWrite(1, HIGH);
    return;
  }
  if(keycode == REMOTE_RIGHT && !DEBUG){
    TrinketHidCombo.pressKey(0, KEYCODE_ARROW_RIGHT);
     digitalWrite(1, HIGH);
    return;
  }
  if(keycode == REMOTE_OK && !DEBUG){
    TrinketHidCombo.pressKey(0, KEYCODE_ENTER);
     digitalWrite(1, HIGH);
    return;
  }
  if(keycode == REMOTE_RETURN && !DEBUG){
    TrinketHidCombo.pressKey(0, KEYCODE_BACKSPACE);
     digitalWrite(1, HIGH);
    return;
  }
  if(keycode == REMOTE_PLAY && !DEBUG){
    TrinketHidCombo.pressMultimediaKey(MMKEY_PLAYPAUSE);
     digitalWrite(1, HIGH);
    return;
  }
   if(keycode == REMOTE_NEXT && !DEBUG){
   TrinketHidCombo.pressMultimediaKey(MMKEY_SCAN_NEXT_TRACK);
     digitalWrite(1, HIGH);
    return;
  }
   if(keycode == REMOTE_PREVIOUS && !DEBUG){
    TrinketHidCombo.pressMultimediaKey(MMKEY_SCAN_PREV_TRACK);
     digitalWrite(1, HIGH);
    return;
  }
  switch (keycode)
  {



 

    default:
      if(DEBUG){
       // TrinketHidCombo.println(keydata, HEX);
      key_tmp = 0;
      key_tmp = keycode;
 
       if(count==8){
          EEPROMWritelong(70, key_tmp);
          delay(100);
           REMOTE_UP = key_tmp;
           
       }
       if(count==7){
          EEPROMWritelong(75, key_tmp);
          delay(100);
          REMOTE_DOWN = key_tmp;
               
       }
        if(count==6){
          EEPROMWritelong(80, key_tmp);
          delay(100);
           REMOTE_LEFT = key_tmp;
       }
       if(count==5){
          EEPROMWritelong(85, key_tmp);
          delay(100);
          REMOTE_RIGHT = key_tmp;
               
       }
        if(count==4){
          EEPROMWritelong(90, key_tmp);
          delay(100);
           REMOTE_OK = key_tmp;
       }
       if(count==3){
          EEPROMWritelong(95, key_tmp);
          delay(100);
          REMOTE_RETURN = key_tmp;
        //  count = 6;     
       }
       if(count==2){
          EEPROMWritelong(100, key_tmp);
          delay(200);
          REMOTE_PLAY = key_tmp;
        
       }
       
        if(count==1){
          EEPROMWritelong(110, key_tmp);
          delay(200);
          REMOTE_NEXT = key_tmp;
        
       }
        if(count==0){
          EEPROMWritelong(115, key_tmp);
          delay(200);
          REMOTE_PREVIOUS = key_tmp;
          count = 9;
        
       }
    
        
      
       
      }else{
        return;
      }
      
  }
  digitalWrite(1, HIGH);
}





