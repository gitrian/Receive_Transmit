#ifndef RECEIVE_TRANSMIT_H
#define RECEIVE_TRANSMIT_H
#include<nRF24L01.h>
#include<RF24.h>
#include<SPI.h>


class Receive_Transmit{
public:
  RF24 radio(int pin1,int pin2);
  Receive_Transmit(int pin1,int pin2, bool receive);
  void initialize();
  void dash();
  void transmit(int x);
private:
  int _pin1;
  int _pin2;
  bool _receive;
};

#endif
