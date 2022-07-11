#include "disassembler.h"

#include <stdio.h>

unsigned int disassemble(unsigned char *buffer, int pc) {
    char length = 1;
    unsigned char opcode = buffer[pc];
    printf("PC: %u Opcode: %u\n", pc, opcode);

    return length;
}
