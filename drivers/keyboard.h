#pragma once
#include "io.h"
#include "vga.h"
#include "../kernel/stdfunc.h"

#define KEYBOARD_ACK 0xFA
#define KEYBOARD_TEST_PASSED 0xAA
#define KEYBOARD_TEST_PASSED_ALT 0xFC
#define KEYBOARD_INTERNEL_ERROR_0 0x00
#define KEYBOARD_INTERNEL_ERROR_1 0xFF

unsigned char get_ch();

void test_keyboard();