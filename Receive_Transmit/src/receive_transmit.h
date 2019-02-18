#ifndef RECEIVE_TRANSMIT_H
#define RECEIVE_TRANSMIT_H
#include<nRF24L01.h>
#include<RF24.h>
#include<SPI.h>
#include <string>

class receive_transmit{
public:
  explicit receive_transmit(const std::string& n)
  : name_(n), punktzahl_(0){}

const std::string& name() const{
  return name_;
}
int punktzahl_() const {
  return punktzahl_;
}
private:
  std::string name_;
  int punktzahl_;
};

#endif
