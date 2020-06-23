#include <stddef.h>
#include <stdint.h>
#include "../drivers/vga.h"
#include "../kernel/stdfunc.h"
#include "../drivers/io.h"
#define KERNEL_VERSION "0.1"


// Kernel has Ring 0 Level access to the Hardware
kmain()
{
    clear_screen();
    char KERNEL_STRING[] = "Kernel Loaded Version ";
    string_cat(KERNEL_STRING, KERNEL_VERSION);
    printk(KERNEL_STRING, 15, 0);
    printk("This is a Test Kernel Please Do not USE in Production", 0x0C, 1);

    test_keyboard();
    while (1)
    {
        
    }
    
}