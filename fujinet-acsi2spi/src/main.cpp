/**
 * acsi2spi - Raspberry Pi pico firmware for use with Fujinet for the Atari 16bit platform. 
 *
 * @file main.cpp
 * @author Johan Tibbelin (sjfroos) (johan.roos@tibbelin.com)
 * @brief main file of acsi2spi a Raspberry Pi Pico acsi controller for use with Fujinet.
 * @version 0.1
 * @date 2023-07-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <Arduino.h>
#include "pinmap.h"
#include <pico/platform.h>
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
