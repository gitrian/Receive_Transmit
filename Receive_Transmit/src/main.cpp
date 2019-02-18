#include "receive_transmit.h"
#include <Arduino.h>

Receive_Transmit Receive_Transmit(13,8,true);

void setup() {
  // put your setup code here, to run once:
  Receive_Transmit.initialize();
}

void loop() {
  // put your main code here, to run repeatedly:
Receive_Transmit.dash();
delay(3000);
}
