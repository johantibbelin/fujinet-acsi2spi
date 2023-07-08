#include <Arduino.h>
#include "pinmap.h"

const uint LED_PIN = 25;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_PIN,OUTPUT);
  sleep_ms(4000);
  Serial.println("Fujinet acsi2spi started...");

  /* Setup Serial */
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_PIN,1);
  Serial.println("ON!");
  sleep_ms(1000);
  digitalWrite(PIN_LED,0);
  Serial.println("OFF!");
  sleep_ms(1000);
  
}
