#include <Arduino.h>
//#include "pinmap.h"

const uint LED_PIN = 25;

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
 // Serial.begin(9600);
  gpio_set_dir(LED_BUILTIN, GPIO_OUT);
 // Serial.println("Fujinet acsi2spi started...");
}

void loop() {
  // put your main code here, to run repeatedly:
  gpio_put(LED_BUILTIN,1);
  sleep_ms(250);
  gpio_put(LED_BUILTIN,0);
  sleep_ms(250);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}