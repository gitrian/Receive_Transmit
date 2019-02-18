#include<nRF24L01.h>
#include<RF24.h>
#include<SPI.h>

RF24 radio(7,8);
const byte address[6]="00001";
int joyX=A1;
int joyY=A2;
int x,y;
int schalter=5;
int state;
int wert=0;
int led=4;


void setup() {
  // put your setup code here, to run once:
radio.begin();
radio.openWritingPipe(address);
radio.setPALevel(RF24_PA_MIN);
radio.stopListening();
pinMode(schalter,INPUT);
pinMode(led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  state=digitalRead(schalter);
if((state==HIGH &&wert==0)||(state==LOW && wert==1)){
  wert=1;
  
  if(wert==1){
    digitalWrite(led,HIGH);
    
x=map(analogRead(joyX),0,1023,0,255);
y=map(analogRead(joyY),0,1023,0,255);

radio.write(&x, sizeof(x));
radio.write(&y, sizeof(y));
}
delay(1000);
  }
  else if(state==HIGH &&wert==1){
    digitalWrite(led,LOW);
    wert=0;
    delay(1000);
    }
  }


  

