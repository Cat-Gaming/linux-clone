#include "vga.h"
#include "../kernel/stdfunc.h"

char* vid_mem = VIDEO_MEM;
int starting_line = 0;

void put_char(char ch, int index, int color)
{
    vid_mem[index] = ch;
    vid_mem[index+1] = color;
}

void printk(char string[], int color, int starting_line)
{
    int starting_index = 160 * starting_line;
    int t = 0;
    for (int i = 0; i < strlen(string)*2; i+=2)
    {
        vid_mem[i+starting_index] = string[t];
        vid_mem[i+1+starting_index] = color;
        t++;
    }
}
void clear_screen()
{
    char *vid_mem = VIDEO_MEM;
    for (int i = 0; i < 80 * 20 * 20; i+=2)
    {
        vid_mem[i] = " ";
        vid_mem[i-1] = 0;
    }
}

int get_starting_line()
{
    return starting_line;
}

void set_starting_line(int str_line)
{
    starting_line = str_line;
}

void printf(char str[], int color)
{
    int starting_index = 160 * get_starting_line();
    int t = 0;
    for (int i = 0; i < strlen(str)*2; i+=2)
    {
        vid_mem[i+starting_index] = str[t];
        vid_mem[i+1+starting_index] = color;
        t++;
    }
}