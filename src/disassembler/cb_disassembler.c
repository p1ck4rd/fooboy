#include "cb_disassembler.h"

#include <stdio.h>

void disassembleCB(unsigned char opcode) {
    switch (opcode) {
        case 0x00:
            printf("RLC B\n");
            break;

        case 0x01:
            printf("RLC C\n");
            break;

        case 0x02:
            printf("RLC D\n");
            break;

        case 0x03:
            printf("RLC E\n");
            break;

        case 0x04:
            printf("RLC H\n");
            break;

        case 0x05:
            printf("RLC L\n");
            break;

        case 0x06:
            printf("RLC (HL)\n");
            break;

        case 0x07:
            printf("RLC A\n");
            break;

        default:
            printf("Unknown opcode\n");
            break;
    }
}
