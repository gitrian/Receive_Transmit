#ifndef RECEIVE_TRANSMIT_H
#define RECEIVE_TRANSMIT_H
#include<nRF24L01.h>
#include<RF24.h>
#include<SPI.h>


class Receive_Transmit{
public:
  Receive_Transmit(int pin1,int pin2, bool receive);
  void initialize();
  void dash();
private:
  int _pin1;
  int _pin2;
  bool _receive;
};

#endif
