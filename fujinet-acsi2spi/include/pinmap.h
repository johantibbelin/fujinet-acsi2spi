/**
 * @file pinmap.h
 * @author Johan Tibbelin (sjfroos) (johan.roos@tibbelin.com)
 * @brief Pinmap for acsi2spi firmware
 * @version 0.1
 * @date 2023-07-11
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#ifndef PINMAP_H
#define PINMAP_H

#include <Arduino.h>

/* UART to esp32 (debug) */

#define ESP_TX  1
#define ESP RX  2

/* SPI pins */

#define ESP_MOSI 19
#define ESP_MISO 16
#define ESP_CLK  18
#define ESP_CS   17

/* Bus tranciver direction pin (data pins) */

#define TRANS_DATA_DIR  7

/* ACSI pins */

/* data pins */
#define ACSI_D0 15                           
#define ACSI_D1 14
#define ACSI_D2 13
#define ACSI_D3 12
#define ACSI_D4 11
#define ACSI_D5 10
#define ACSI_D6 9
#define ACSI_D7 8

/* Control pins */
#define ACSI_RESET  22
#define ACSI_A1     27     
#define ACSI_CS     28
#define ACSI_IRQ    -1
#define ACSI_ACK    
#define ACSI_DRQ

#endif /* PINMAP_H */