#include<nRF24L01.h>
#include<RF24.h>
#include<SPI.h>
#include <Servo.h>

Servo firstESC;
RF24 radio(7,8);
const byte address[6]="00001";
int value=0;
int val=0;
void setup() {
  // put your setup code here, to run once:
 firstESC.attach(3);  
  // attached to pin 9 I just do this with 1 Servo
Serial.begin(9600);
radio.begin();
radio.openReadingPipe(0,address);
radio.setPALevel(RF24_PA_MIN);
radio.startListening();
}

void loop() {
  // put your main code here, to run repeatedly:
  if(radio.available()){
    while(radio.available()){
radio.read(&val, sizeof(val));
value=map(val,0,255,800,2000);
firstESC.writeMicroseconds(value);

Serial.println(value);
    }
  }
}
