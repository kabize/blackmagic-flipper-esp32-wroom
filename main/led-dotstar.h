#pragma once
#include <stdint.h>
#include "dotstar.h"

// Implement the same functions as led.h only use 

void led_init();

void led_set(uint8_t red, uint8_t green, uint8_t blue);

void led_set_red(uint8_t value);
void led_set_green(uint8_t value);
void led_set_blue(uint8_t value);