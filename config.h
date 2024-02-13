// Copyright 2024 Alshochat (@Alshochat)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// Encoder
#define ENCODER_RESOLUTION 2

// RGB settings.
#define RGBLIGHT_LIMIT_VAL 60

// Reset.
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

// I2C config
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP26
#define I2C1_SCL_PIN GP27

//split
// #define SERIAL_PIO_USE_PIO1 // Force the usage of PIO1 peripheral, by default the Serial implementation uses the PIO0 peripheral
// #define SPLIT_TRANSPORT_MIRROR
// #define SPLIT_LAYER_STATE_ENABLE
// #define SPLIT_LED_STATE_ENABLE
// #define SPLIT_MODS_ENABLE

/*
    "matrix_pins": {
        "cols": ["GP8", "GP9", "GP10", "GP11", "GP7","GP8","GP9","GP6","GP5", "GP10", "GP11","GP12","GP13","GP14","GP15","GP4","GP3","GP2"],
        "rows": ["GP2", "GP3", "GP4", "GP5", "GP6", "GP7", "GP21", "GP20", "GP19", "GP18", "GP17", "GP16"]
    },
*/
//matirix pins 

#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1

/* key matrix size */
#define MATRIX_ROWS 12
#define MATRIX_COLS 18

// right side configuration
#define MATRIX_COL_PINS_RIGHT { GP7, GP8, GP9, GP6, GP5, GP10, GP11, GP12, GP13, GP14, GP15, GP4, GP3, GP2 /* define your right column pins here */ }
#define MATRIX_ROW_PINS_RIGHT { GP21, GP20, GP19, GP18, GP17, GP16 /* define your right row pins here */ }

// left side configuration
#define MATRIX_COL_PINS_LEFT { GP8, GP9, GP10, GP11 /* define your left column pins here */ }
#define MATRIX_ROW_PINS_LEFT { GP2, GP3, GP4, GP5, GP6, GP7 /* define your left row pins here */ }


// #define BOOTMAGIC_LITE_ROW    0
// #define BOOTMAGIC_LITE_COLUMN 5