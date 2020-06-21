#pragma once
#include <stddef.h>
#include <stdint.h>
#define VIDEO_MEM 0xb8000

void put_char(char ch, int index, int color);

void printk(char string[], int color, int starting_line);

void clear_screen();

void printf(char str[], int color);

int get_starting_line();

void set_starting_line(int str_line);