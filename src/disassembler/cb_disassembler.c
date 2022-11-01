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

        case 0x18:
            printf("RR B\n");
            break;

        case 0x19:
            printf("RR C\n");
            break;

        case 0x1A:
            printf("RR D\n");
            break;

        case 0x1B:
            printf("RR E\n");
            break;

        case 0x1C:
            printf("RR H\n");
            break;

        case 0x1D:
            printf("RR L\n");
            break;

        case 0x1E:
            printf("RR (HL)\n");
            break;

        case 0x1F:
            printf("RR A\n");
            break;

        case 0x20:
            printf("SLA B\n");
            break;

        case 0x21:
            printf("SLA C\n");
            break;

        case 0x22:
            printf("SLA D\n");
            break;

        case 0x23:
            printf("SLA E\n");
            break;

        case 0x24:
            printf("SLA H\n");
            break;

        case 0x25:
            printf("SLA L\n");
            break;

        case 0x26:
            printf("SLA (HL)\n");
            break;

        case 0x27:
            printf("SLA A\n");
            break;

        case 0x28:
            printf("SRA B\n");
            break;

        case 0x29:
            printf("SRA C\n");
            break;

        case 0x2A:
            printf("SRA D\n");
            break;

        case 0x2B:
            printf("SRA E\n");
            break;

        case 0x2C:
            printf("SRA H\n");
            break;

        case 0x2D:
            printf("SRA L\n");
            break;

        case 0x2E:
            printf("SRA (HL)\n");
            break;

        case 0x2F:
            printf("SRA A\n");
            break;

        case 0x30:
            printf("SWAP B\n");
            break;

        case 0x31:
            printf("SWAP C\n");
            break;

        case 0x32:
            printf("SWAP D\n");
            break;

        case 0x33:
            printf("SWAP E\n");
            break;

        case 0x34:
            printf("SWAP H\n");
            break;

        case 0x35:
            printf("SWAP L\n");
            break;

        case 0x36:
            printf("SWAP (HL)\n");
            break;

        case 0x37:
            printf("SWAP A\n");
            break;

        default:
            printf("Unknown opcode\n");
            break;
    }
}
