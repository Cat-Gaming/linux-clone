bits 32
section .multiboot_header
header_start:
    dd 0x1BADB002 ; Magic Number for Multiboot
    dd 0x00 ; flags
    dd - (0x1BADB002 + 0x00) ; checksum
header_end:

section .text
global _start
_start:
    call bit_mode_64

bits 64
bit_mode_64:
    extern kmain
    cli
    call kmain
jmp $