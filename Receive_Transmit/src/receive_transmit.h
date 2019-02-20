#ifndef RECEIVE_TRANSMIT_H
#define RECEIVE_TRANSMIT_H
#include<nRF24L01.h>
#include<RF24.h>
#include<SPI.h>


class Receive_Transmit{
private:
  int _pin1;
  int _pin2;
  bool _receive;
public:
  RF24 radio = RF24(_pin1,_pin2);
  Receive_Transmit(int pin1,int pin2, bool receive);
  void initialize();
  void dash();
  void transmit(int x);
};

#endif
