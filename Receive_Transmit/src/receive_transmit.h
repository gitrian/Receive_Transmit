#ifndef RECEIVE_TRANSMIT_H
#define RECEIVE_TRANSMIT_H
#include<nRF24L01.h>
#include<RF24.h>
#include<SPI.h>


class Receive_Transmit{
public:
  Receive_Transmit(int pin);
  void dot();
  void dash();
private:
  int _pin;
};

#endif
