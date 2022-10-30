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

        case 0x08:
            printf("RRC B\n");
            break;

        case 0x09:
            printf("RRC C\n");
            break;

        case 0x0A:
            printf("RRC D\n");
            break;

        case 0x0B:
            printf("RRC E\n");
            break;

        case 0x0C:
            printf("RRC H\n");
            break;

        case 0x0D:
            printf("RRC L\n");
            break;

        case 0x0E:
            printf("RRC (HL)\n");
            break;

        case 0x0F:
            printf("RRC A\n");
            break;

        case 0x10:
            printf("RL B\n");
            break;

        case 0x11:
            printf("RL C\n");
            break;

        case 0x12:
            printf("RL D\n");
            break;

        case 0x13:
            printf("RL E\n");
            break;

        case 0x14:
            printf("RL H\n");
            break;

        case 0x15:
            printf("RL L\n");
            break;

        case 0x16:
            printf("RL (HL)\n");
            break;

        case 0x17:
            printf("RL A\n");
            break;

        default:
            printf("Unknown opcode\n");
            break;
    }
}
