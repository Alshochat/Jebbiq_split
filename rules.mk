# This file intentionally left blank
# MCU name
MCU = RP2040

# Build Options
# change yes to no to disable
LTO_ENABLE = yes
RGBLIGHT_ENABLE = yes

WS2812_DRIVER = vendor

OLED_ENABLE = yes
OLED_DRIVER = SSD1306

# OPT_DEFS += -DHAL_USE_I2C=TRUE

WPM_ENABLE = yes

SPLIT_KEYBOARD = yes
CUSTOM_MATRIX = lite
SERIAL_DRIVER = vendor
