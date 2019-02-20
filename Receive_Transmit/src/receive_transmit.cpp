#include "Arduino.h"
#include "receive_transmit.h"
#include<nRF24L01.h>
#include<RF24.h>

Receive_Transmit::Receive_Transmit(int pin1, int pin2, bool receive)
{
  pinMode(pin1, OUTPUT);
  _pin1 = pin1;
  _pin2 = pin2;
  _receive = receive;

}

void Receive_Transmit::initialize()
{
const byte address[6]="00001";
if(_receive==true){
  //initialization for receiving data
  radio.begin();
  radio.openReadingPipe(0,address);
  radio.setPALevel(RF24_PA_MIN);
  radio.startListening();
}
else{
  //initialization for sending data
  radio.begin();
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();
}}

void Receive_Transmit::transmit(int x)
{
  radio.write(&x, sizeof(x));
}



void Receive_Transmit::dash()
{
  digitalWrite(_pin1, HIGH);
  delay(1000);
  digitalWrite(_pin1, LOW);
  delay(250);
}
