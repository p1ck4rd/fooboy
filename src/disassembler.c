#include "disassembler.h"

#include <stdio.h>

unsigned char disassemble(unsigned char *buffer, int pc) {
    unsigned char length = 1;
    unsigned char opcode = buffer[pc];
    printf("PC: %x Opcode: %x\n", pc, opcode);

    switch (opcode) {
        case 0x40:
            printf("LD B, B\n");
            break;

        case 0x41:
            printf("LD B, C\n");
            break;

        case 0x42:
            printf("LD B, D\n");
            break;

        case 0x43:
            printf("LD B, E\n");
            break;

        case 0x44:
            printf("LD B, H\n");
            break;

        case 0x45:
            printf("LD B, L\n");
            break;

        case 0x47:
            printf("LD B, A\n");
            break;

        case 0x48:
            printf("LD C, B\n");
            break;

        case 0x49:
            printf("LD C, C\n");
            break;

        case 0x4A:
            printf("LD C, D\n");
            break;

        case 0x4B:
            printf("LD C, E\n");
            break;

        case 0x4C:
            printf("LD C, H\n");
            break;

        case 0x4D:
            printf("LD C, L\n");
            break;

        case 0x4F:
            printf("LD C, A\n");
            break;

        case 0x50:
            printf("LD D, B\n");
            break;

        case 0x51:
            printf("LD D, C\n");
            break;

        case 0x52:
            printf("LD D, D\n");
            break;

        case 0x53:
            printf("LD D, E\n");
            break;

        case 0x54:
            printf("LD D, H\n");
            break;

        case 0x55:
            printf("LD D, L\n");
            break;

        case 0x57:
            printf("LD D, A\n");
            break;

        case 0x58:
            printf("LD E, B\n");
            break;

        case 0x59:
            printf("LD E, C\n");
            break;

        case 0x5A:
            printf("LD E, D\n");
            break;

        case 0x5B:
            printf("LD E, E\n");
            break;

        case 0x5C:
            printf("LD E, H\n");
            break;

        case 0x5D:
            printf("LD E, L\n");
            break;

        case 0x5F:
            printf("LD E, A\n");
            break;

        case 0x60:
            printf("LD H, B\n");
            break;

        case 0x61:
            printf("LD H, C\n");
            break;

        case 0x62:
            printf("LD H, D\n");
            break;

        case 0x63:
            printf("LD H, E\n");
            break;

        case 0x64:
            printf("LD H, H\n");
            break;

        case 0x65:
            printf("LD H, L\n");
            break;

        case 0x67:
            printf("LD H, A\n");
            break;

        case 0x68:
            printf("LD L, B\n");
            break;

        case 0x69:
            printf("LD L, C\n");
            break;

        case 0x6A:
            printf("LD L, D\n");
            break;

        case 0x6B:
            printf("LD L, E\n");
            break;

        case 0x6C:
            printf("LD L, H\n");
            break;

        case 0x6D:
            printf("LD L, L\n");
            break;

        case 0x6F:
            printf("LD L, A\n");
            break;

        case 0x78:
            printf("LD A, B\n");
            break;

        case 0x79:
            printf("LD A, C\n");
            break;

        case 0x7A:
            printf("LD A, D\n");
            break;

        case 0x7B:
            printf("LD A, E\n");
            break;

        case 0x7C:
            printf("LD A, H\n");
            break;

        case 0x7D:
            printf("LD A, L\n");
            break;

        case 0x7F:
            printf("LD A, A\n");
            break;

        default:
            printf("Unknown opcode\n");
            break;
    }

    return length;
}
