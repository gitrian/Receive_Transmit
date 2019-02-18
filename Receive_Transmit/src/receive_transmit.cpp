#include "Arduino.h"
#include "receive_transmit.h"

Receive_Transmit::Receive_Transmit(int pin1, int pin2, bool receive)
{
  pinMode(pin1, OUTPUT);
  _pin1 = pin1;
  _pin2 = pin2;
  _receive = receive;
}

void Receive_Transmit::initialize()
{
if(_receive==true){
  //initialization for receiving data
}
else{
  //initialization for sending data
}
}



void Receive_Transmit::dash()
{
  digitalWrite(_pin1, HIGH);
  delay(1000);
  digitalWrite(_pin1, LOW);
  delay(250);
}
