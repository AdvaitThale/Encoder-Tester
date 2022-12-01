/*
  Author: Advait Thale

  *******************************************************************
  *                   Incremental Encoder Counter                   *    
  *******************************************************************
  
  Pinout for Orange Incremental Encoder 400 PPR 2 Phase:
  +----------------------+
  |Vcc| Gnd |  A  |  B   |
  |Red|Black|Green|Orange|
  +----------------------+
  
*/

#define ENCA 2 //Encoder Interrupts
#define ENCB 3
volatile int temp, encoder_count = 0, currentPos, prevPos = 0;

void setup() {
 Serial.begin(115200);
 pinMode(ENCA, INPUT_PULLUP);   //Encoder
 pinMode(ENCB, INPUT_PULLUP);
 attachInterrupt(digitalPinToInterrupt(2), ISRA, RISING);
 attachInterrupt(digitalPinToInterrupt(3), ISRB, RISING);
}

void loop() {
  if( encoder_count != currentPos ){
    currentPos = encoder_count;
    Serial.println (currentPos); //Displays current position on Serial monitor
  }
}
 
void ISRA() {
  if(digitalRead(3)==LOW) {
  encoder_count++;
  }
  else{
  encoder_count--;
  }
}

void ISRB() {
  if(digitalRead(2)==LOW) {
  encoder_count--;
  }
  else{
  encoder_count++;
  }
}

 

// 900
// 2500
// 6000
// 8600
// 11000

// 0 
// 300 >> 
// 500 >> 
// 700 >> 
// 900 >> 
//1100 >>  #define PICK_DIR 8 //Motor Pins
#define PICK_PWM 9

#define ENCA 2 //Encoder Interrupts
#define ENCB 3
volatile int temp, encoder_count = 0, currentPos, prevPos = 0;

void setup() {
 Serial.begin(115200);
 pinMode(PICK_DIR, OUTPUT);//Motor
 pinMode(PICK_PWM, OUTPUT);

 pinMode(ENCA, INPUT_PULLUP);//Encoder
 pinMode(ENCB, INPUT_PULLUP);
 attachInterrupt(digitalPinToInterrupt(2), ISRA, RISING);
 attachInterrupt(digitalPinToInterrupt(3), ISRB, RISING);
 analogWrite(PICK_PWM, 0);
}

void loop() {
  if( encoder_count != currentPos ){
    currentPos = encoder_count;
    Serial.println (currentPos);
  }
}
 
void ISRA() {
  if(digitalRead(3)==LOW) {
  encoder_count++;
  }
  else{
  encoder_count--;
  }
}

void ISRB() {
  if(digitalRead(2)==LOW) {
  encoder_count--;
  }
  else{
  encoder_count++;
  }
}

 

// 900
// 2500
// 6000
// 8600
// 11000

// 0 
// 300 >> 
// 500 >> 
// 700 >> 
// 900 >> 
//1100 >>  
