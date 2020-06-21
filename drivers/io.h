#pragma once
#include <stddef.h>
#include <stdint.h>

void byte_out(unsigned short port, unsigned char data);

unsigned char byte_in(unsigned short port);