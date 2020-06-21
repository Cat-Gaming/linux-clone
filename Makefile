CFLAGS= -nostdlib -ffreestanding -m32
CC=i686-linux-gnu-gcc

all: init/main.o drivers/vga.o kernel/stdfunc.o drivers/io.o drivers/keyboard.o
	nasm -f elf32 asm/head.asm -o asm/head.o
	i686-linux-gnu-ld -o linux.bin -T link.ld asm/head.o init/main.o drivers/vga.o kernel/stdfunc.o drivers/io.o drivers/keyboard.o

clean:
	rm */*.o