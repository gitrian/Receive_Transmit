#include "Arduino.h"
#include "receive_transmit.h"

Receive_Transmit::Receive_Transmit(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void Receive_Transmit::dot()
{
  digitalWrite(_pin, HIGH);
  delay(250);
  digitalWrite(_pin, LOW);
  delay(250);
}

void Receive_Transmit::dash()
{
  digitalWrite(_pin, HIGH);
  delay(1000);
  digitalWrite(_pin, LOW);
  delay(250);
}
