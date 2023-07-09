#ifndef PINMAP_H
#define PINMAP_H

#include <Arduino.h>
/* UART to esp32 (debug) */

#define ESP_TX  UART0_TX
#define ESP RX  UART0_RX

/* SPI pins */

#define ESP_MOSI
#define ESP_MISO
#define ESP_CLK
#define ESP_CS

/* ACSI pins */

/* data pins */
#define ACSI_D0 
#define ACSI_D1
#define ACSI_D2
#define ACSI_D3
#define ACSI_D4
#define ACSI_D5
#define ACSI_D6
#define ACSI_D7

/* Control pins */
#define ACSI_RESET
#define ACSI_A1
#define ACSI_CS
#define ACSI_IRQ
#define ACSI_ACK
#define ACSI_DRQ

#endif /* PINMAP_H */