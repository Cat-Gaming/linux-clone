#include "io.h"

unsigned char byte_in(unsigned short port)
{
    unsigned char result;
    __asm__("in %%dx, %%al" : "=a" (result) : "d" (port));
    return result;
}

void byte_out(unsigned short port, unsigned char data)
{
    __asm__("out %%al, %%dx" : :"a" (data), "d" (port));
}