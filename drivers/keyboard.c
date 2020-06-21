#include "../drivers/keyboard.h"

unsigned char get_ch()
{
    unsigned char ch = byte_in(0x60);
    return ch;
}

void test_keyboard()
{
    printk("Starting Self Test...", 15, 3);
    char byte = byte_in(0xFF);
    if (byte == KEYBOARD_TEST_PASSED)
        printk("Self test Completed!", 0x0C, 4);
    else
    {
        printk("Self test failed!", 0x0C, 4);
    }
    
}