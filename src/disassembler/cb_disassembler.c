#include "cb_disassembler.h"

#include <stdio.h>

void disassembleCB(unsigned char opcode) {
    printf("CB-prefixed instruction OP: %X\n", opcode);

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

        case 0x38:
            printf("SRL B\n");
            break;

        case 0x39:
            printf("SRL C\n");
            break;

        case 0x3A:
            printf("SRL D\n");
            break;

        case 0x3B:
            printf("SRL E\n");
            break;

        case 0x3C:
            printf("SRL H\n");
            break;

        case 0x3D:
            printf("SRL L\n");
            break;

        case 0x3E:
            printf("SRL (HL)\n");
            break;

        case 0x3F:
            printf("SRL A\n");
            break;

        case 0x40:
            printf("BIT 0, B\n");
            break;

        case 0x41:
            printf("BIT 0, C\n");
            break;

        case 0x42:
            printf("BIT 0, D\n");
            break;

        case 0x43:
            printf("BIT 0, E\n");
            break;

        case 0x44:
            printf("BIT 0, H\n");
            break;

        case 0x45:
            printf("BIT 0, L\n");
            break;

        case 0x46:
            printf("BIT 0, (HL)\n");
            break;

        case 0x47:
            printf("BIT 0, A\n");
            break;

        case 0x48:
            printf("BIT 1, B\n");
            break;

        case 0x49:
            printf("BIT 1, C\n");
            break;

        case 0x4A:
            printf("BIT 1, D\n");
            break;

        case 0x4B:
            printf("BIT 1, E\n");
            break;

        case 0x4C:
            printf("BIT 1, H\n");
            break;

        case 0x4D:
            printf("BIT 1, L\n");
            break;

        case 0x4E:
            printf("BIT 1, (HL)\n");
            break;

        case 0x4F:
            printf("BIT 1, A\n");
            break;

        case 0x50:
            printf("BIT 2, B\n");
            break;

        case 0x51:
            printf("BIT 2, C\n");
            break;

        case 0x52:
            printf("BIT 2, D\n");
            break;

        case 0x53:
            printf("BIT 2, E\n");
            break;

        case 0x54:
            printf("BIT 2, H\n");
            break;

        case 0x55:
            printf("BIT 2, L\n");
            break;

        case 0x56:
            printf("BIT 2, (HL)\n");
            break;

        case 0x57:
            printf("BIT 2, A\n");
            break;

        case 0x58:
            printf("BIT 3, B\n");
            break;

        case 0x59:
            printf("BIT 3, C\n");
            break;

        case 0x5A:
            printf("BIT 3, D\n");
            break;

        case 0x5B:
            printf("BIT 3, E\n");
            break;

        case 0x5C:
            printf("BIT 3, H\n");
            break;

        case 0x5D:
            printf("BIT 3, L\n");
            break;

        case 0x5E:
            printf("BIT 3, (HL)\n");
            break;

        case 0x5F:
            printf("BIT 3, A\n");
            break;

        case 0x60:
            printf("BIT 4, B\n");
            break;

        case 0x61:
            printf("BIT 4, C\n");
            break;

        case 0x62:
            printf("BIT 4, D\n");
            break;

        case 0x63:
            printf("BIT 4, E\n");
            break;

        case 0x64:
            printf("BIT 4, H\n");
            break;

        case 0x65:
            printf("BIT 4, L\n");
            break;

        case 0x66:
            printf("BIT 4, (HL)\n");
            break;

        case 0x67:
            printf("BIT 4, A\n");
            break;

        case 0x68:
            printf("BIT 5, B\n");
            break;

        case 0x69:
            printf("BIT 5, C\n");
            break;

        case 0x6A:
            printf("BIT 5, D\n");
            break;

        case 0x6B:
            printf("BIT 5, E\n");
            break;

        case 0x6C:
            printf("BIT 5, H\n");
            break;

        case 0x6D:
            printf("BIT 5, L\n");
            break;

        case 0x6E:
            printf("BIT 5, (HL)\n");
            break;

        case 0x6F:
            printf("BIT 5, A\n");
            break;

        case 0x70:
            printf("BIT 6, B\n");
            break;

        case 0x71:
            printf("BIT 6, C\n");
            break;

        case 0x72:
            printf("BIT 6, D\n");
            break;

        case 0x73:
            printf("BIT 6, E\n");
            break;

        case 0x74:
            printf("BIT 6, H\n");
            break;

        case 0x75:
            printf("BIT 6, L\n");
            break;

        case 0x76:
            printf("BIT 6, (HL)\n");
            break;

        case 0x77:
            printf("BIT 6, A\n");
            break;

        case 0x78:
            printf("BIT 7, B\n");
            break;

        case 0x79:
            printf("BIT 7, C\n");
            break;

        case 0x7A:
            printf("BIT 7, D\n");
            break;

        case 0x7B:
            printf("BIT 7, E\n");
            break;

        case 0x7C:
            printf("BIT 7, H\n");
            break;

        case 0x7D:
            printf("BIT 7, L\n");
            break;

        case 0x7E:
            printf("BIT 7, (HL)\n");
            break;

        case 0x7F:
            printf("BIT 7, A\n");
            break;

        default:
            printf("Unknown opcode\n");
            break;
    }
}
