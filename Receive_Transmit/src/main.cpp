#include "receive_transmit.h"
#include <Arduino.h>

Receive_Transmit Receive_Transmit(13);

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
Receive_Transmit.dot(); Receive_Transmit.dot(); Receive_Transmit.dot();
Receive_Transmit.dash(); Receive_Transmit.dash(); Receive_Transmit.dash();
Receive_Transmit.dot(); Receive_Transmit.dot(); Receive_Transmit.dot();
delay(3000);
}
