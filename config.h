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
#define SERIAL_PIO_USE_PIO1 // Force the usage of PIO1 peripheral, by default the Serial implementation uses the PIO0 peripheral
// #define SPLIT_TRANSPORT_MIRROR
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_LED_STATE_ENABLE
#define SPLIT_MODS_ENABLE