#include "cb_disassembler.h"

#include <stdio.h>

void disassembleCB(unsigned char opcode) {
    printf("CB-prefixed instruction OP: %X\n", opcode);

    switch (opcode) {
        case 0x00:
            puts("RLC B");
            break;

        case 0x01:
            puts("RLC C");
            break;

        case 0x02:
            puts("RLC D");
            break;

        case 0x03:
            puts("RLC E");
            break;

        case 0x04:
            puts("RLC H");
            break;

        case 0x05:
            puts("RLC L");
            break;

        case 0x06:
            puts("RLC (HL)");
            break;

        case 0x07:
            puts("RLC A");
            break;

        case 0x08:
            puts("RRC B");
            break;

        case 0x09:
            puts("RRC C");
            break;

        case 0x0A:
            puts("RRC D");
            break;

        case 0x0B:
            puts("RRC E");
            break;

        case 0x0C:
            puts("RRC H");
            break;

        case 0x0D:
            puts("RRC L");
            break;

        case 0x0E:
            puts("RRC (HL)");
            break;

        case 0x0F:
            puts("RRC A");
            break;

        case 0x10:
            puts("RL B");
            break;

        case 0x11:
            puts("RL C");
            break;

        case 0x12:
            puts("RL D");
            break;

        case 0x13:
            puts("RL E");
            break;

        case 0x14:
            puts("RL H");
            break;

        case 0x15:
            puts("RL L");
            break;

        case 0x16:
            puts("RL (HL)");
            break;

        case 0x17:
            puts("RL A");
            break;

        case 0x18:
            puts("RR B");
            break;

        case 0x19:
            puts("RR C");
            break;

        case 0x1A:
            puts("RR D");
            break;

        case 0x1B:
            puts("RR E");
            break;

        case 0x1C:
            puts("RR H");
            break;

        case 0x1D:
            puts("RR L");
            break;

        case 0x1E:
            puts("RR (HL)");
            break;

        case 0x1F:
            puts("RR A");
            break;

        case 0x20:
            puts("SLA B");
            break;

        case 0x21:
            puts("SLA C");
            break;

        case 0x22:
            puts("SLA D");
            break;

        case 0x23:
            puts("SLA E");
            break;

        case 0x24:
            puts("SLA H");
            break;

        case 0x25:
            puts("SLA L");
            break;

        case 0x26:
            puts("SLA (HL)");
            break;

        case 0x27:
            puts("SLA A");
            break;

        case 0x28:
            puts("SRA B");
            break;

        case 0x29:
            puts("SRA C");
            break;

        case 0x2A:
            puts("SRA D");
            break;

        case 0x2B:
            puts("SRA E");
            break;

        case 0x2C:
            puts("SRA H");
            break;

        case 0x2D:
            puts("SRA L");
            break;

        case 0x2E:
            puts("SRA (HL)");
            break;

        case 0x2F:
            puts("SRA A");
            break;

        case 0x30:
            puts("SWAP B");
            break;

        case 0x31:
            puts("SWAP C");
            break;

        case 0x32:
            puts("SWAP D");
            break;

        case 0x33:
            puts("SWAP E");
            break;

        case 0x34:
            puts("SWAP H");
            break;

        case 0x35:
            puts("SWAP L");
            break;

        case 0x36:
            puts("SWAP (HL)");
            break;

        case 0x37:
            puts("SWAP A");
            break;

        case 0x38:
            puts("SRL B");
            break;

        case 0x39:
            puts("SRL C");
            break;

        case 0x3A:
            puts("SRL D");
            break;

        case 0x3B:
            puts("SRL E");
            break;

        case 0x3C:
            puts("SRL H");
            break;

        case 0x3D:
            puts("SRL L");
            break;

        case 0x3E:
            puts("SRL (HL)");
            break;

        case 0x3F:
            puts("SRL A");
            break;

        case 0x40:
            puts("BIT 0, B");
            break;

        case 0x41:
            puts("BIT 0, C");
            break;

        case 0x42:
            puts("BIT 0, D");
            break;

        case 0x43:
            puts("BIT 0, E");
            break;

        case 0x44:
            puts("BIT 0, H");
            break;

        case 0x45:
            puts("BIT 0, L");
            break;

        case 0x46:
            puts("BIT 0, (HL)");
            break;

        case 0x47:
            puts("BIT 0, A");
            break;

        case 0x48:
            puts("BIT 1, B");
            break;

        case 0x49:
            puts("BIT 1, C");
            break;

        case 0x4A:
            puts("BIT 1, D");
            break;

        case 0x4B:
            puts("BIT 1, E");
            break;

        case 0x4C:
            puts("BIT 1, H");
            break;

        case 0x4D:
            puts("BIT 1, L");
            break;

        case 0x4E:
            puts("BIT 1, (HL)");
            break;

        case 0x4F:
            puts("BIT 1, A");
            break;

        case 0x50:
            puts("BIT 2, B");
            break;

        case 0x51:
            puts("BIT 2, C");
            break;

        case 0x52:
            puts("BIT 2, D");
            break;

        case 0x53:
            puts("BIT 2, E");
            break;

        case 0x54:
            puts("BIT 2, H");
            break;

        case 0x55:
            puts("BIT 2, L");
            break;

        case 0x56:
            puts("BIT 2, (HL)");
            break;

        case 0x57:
            puts("BIT 2, A");
            break;

        case 0x58:
            puts("BIT 3, B");
            break;

        case 0x59:
            puts("BIT 3, C");
            break;

        case 0x5A:
            puts("BIT 3, D");
            break;

        case 0x5B:
            puts("BIT 3, E");
            break;

        case 0x5C:
            puts("BIT 3, H");
            break;

        case 0x5D:
            puts("BIT 3, L");
            break;

        case 0x5E:
            puts("BIT 3, (HL)");
            break;

        case 0x5F:
            puts("BIT 3, A");
            break;

        case 0x60:
            puts("BIT 4, B");
            break;

        case 0x61:
            puts("BIT 4, C");
            break;

        case 0x62:
            puts("BIT 4, D");
            break;

        case 0x63:
            puts("BIT 4, E");
            break;

        case 0x64:
            puts("BIT 4, H");
            break;

        case 0x65:
            puts("BIT 4, L");
            break;

        case 0x66:
            puts("BIT 4, (HL)");
            break;

        case 0x67:
            puts("BIT 4, A");
            break;

        case 0x68:
            puts("BIT 5, B");
            break;

        case 0x69:
            puts("BIT 5, C");
            break;

        case 0x6A:
            puts("BIT 5, D");
            break;

        case 0x6B:
            puts("BIT 5, E");
            break;

        case 0x6C:
            puts("BIT 5, H");
            break;

        case 0x6D:
            puts("BIT 5, L");
            break;

        case 0x6E:
            puts("BIT 5, (HL)");
            break;

        case 0x6F:
            puts("BIT 5, A");
            break;

        case 0x70:
            puts("BIT 6, B");
            break;

        case 0x71:
            puts("BIT 6, C");
            break;

        case 0x72:
            puts("BIT 6, D");
            break;

        case 0x73:
            puts("BIT 6, E");
            break;

        case 0x74:
            puts("BIT 6, H");
            break;

        case 0x75:
            puts("BIT 6, L");
            break;

        case 0x76:
            puts("BIT 6, (HL)");
            break;

        case 0x77:
            puts("BIT 6, A");
            break;

        case 0x78:
            puts("BIT 7, B");
            break;

        case 0x79:
            puts("BIT 7, C");
            break;

        case 0x7A:
            puts("BIT 7, D");
            break;

        case 0x7B:
            puts("BIT 7, E");
            break;

        case 0x7C:
            puts("BIT 7, H");
            break;

        case 0x7D:
            puts("BIT 7, L");
            break;

        case 0x7E:
            puts("BIT 7, (HL)");
            break;

        case 0x7F:
            puts("BIT 7, A");
            break;

        case 0x80:
            puts("RES 0, B");
            break;

        case 0x81:
            puts("RES 0, C");
            break;

        case 0x82:
            puts("RES 0, D");
            break;

        case 0x83:
            puts("RES 0, E");
            break;

        case 0x84:
            puts("RES 0, H");
            break;

        case 0x85:
            puts("RES 0, L");
            break;

        case 0x86:
            puts("RES 0, (HL)");
            break;

        case 0x87:
            puts("RES 0, A");
            break;

        case 0x88:
            puts("RES 1, B");
            break;

        case 0x89:
            puts("RES 1, C");
            break;

        case 0x8A:
            puts("RES 1, D");
            break;

        case 0x8B:
            puts("RES 1, E");
            break;

        case 0x8C:
            puts("RES 1, H");
            break;

        case 0x8D:
            puts("RES 1, L");
            break;

        case 0x8E:
            puts("RES 1, (HL)");
            break;

        case 0x8F:
            puts("RES 1, A");
            break;

        case 0x90:
            puts("RES 2, B");
            break;

        case 0x91:
            puts("RES 2, C");
            break;

        case 0x92:
            puts("RES 2, D");
            break;

        case 0x93:
            puts("RES 2, E");
            break;

        case 0x94:
            puts("RES 2, H");
            break;

        case 0x95:
            puts("RES 2, L");
            break;

        case 0x96:
            puts("RES 2, (HL)");
            break;

        case 0x97:
            puts("RES 2, A");
            break;

        case 0x98:
            puts("RES 3, B");
            break;

        case 0x99:
            puts("RES 3, C");
            break;

        case 0x9A:
            puts("RES 3, D");
            break;

        case 0x9B:
            puts("RES 3, E");
            break;

        case 0x9C:
            puts("RES 3, H");
            break;

        case 0x9D:
            puts("RES 3, L");
            break;

        case 0x9E:
            puts("RES 3, (HL)");
            break;

        case 0x9F:
            puts("RES 3, A");
            break;

        case 0xA0:
            puts("RES 4, B");
            break;

        case 0xA1:
            puts("RES 4, C");
            break;

        case 0xA2:
            puts("RES 4, D");
            break;

        case 0xA3:
            puts("RES 4, E");
            break;

        case 0xA4:
            puts("RES 4, H");
            break;

        case 0xA5:
            puts("RES 4, L");
            break;

        case 0xA6:
            puts("RES 4, (HL)");
            break;

        case 0xA7:
            puts("RES 4, A");
            break;

        case 0xA8:
            puts("RES 5, B");
            break;

        case 0xA9:
            puts("RES 5, C");
            break;

        case 0xAA:
            puts("RES 5, D");
            break;

        case 0xAB:
            puts("RES 5, E");
            break;

        case 0xAC:
            puts("RES 5, H");
            break;

        case 0xAD:
            puts("RES 5, L");
            break;

        case 0xAE:
            puts("RES 5, (HL)");
            break;

        case 0xAF:
            puts("RES 5, A");
            break;

        case 0xB0:
            puts("RES 6, B");
            break;

        case 0xB1:
            puts("RES 6, C");
            break;

        case 0xB2:
            puts("RES 6, D");
            break;

        case 0xB3:
            puts("RES 6, E");
            break;

        case 0xB4:
            puts("RES 6, H");
            break;

        case 0xB5:
            puts("RES 6, L");
            break;

        case 0xB6:
            puts("RES 6, (HL)");
            break;

        case 0xB7:
            puts("RES 6, A");
            break;

        case 0xB8:
            puts("RES 7, B");
            break;

        case 0xB9:
            puts("RES 7, C");
            break;

        case 0xBA:
            puts("RES 7, D");
            break;

        case 0xBB:
            puts("RES 7, E");
            break;

        case 0xBC:
            puts("RES 7, H");
            break;

        case 0xBD:
            puts("RES 7, L");
            break;

        case 0xBE:
            puts("RES 7, (HL)");
            break;

        case 0xBF:
            puts("RES 7, A");
            break;

        case 0xC0:
            puts("SET 0, B");
            break;

        case 0xC1:
            puts("SET 0, C");
            break;

        case 0xC2:
            puts("SET 0, D");
            break;

        case 0xC3:
            puts("SET 0, E");
            break;

        case 0xC4:
            puts("SET 0, H");
            break;

        case 0xC5:
            puts("SET 0, L");
            break;

        case 0xC6:
            puts("SET 0, (HL)");
            break;

        case 0xC7:
            puts("SET 0, A");
            break;

        case 0xC8:
            puts("SET 1, B");
            break;

        case 0xC9:
            puts("SET 1, C");
            break;

        case 0xCA:
            puts("SET 1, D");
            break;

        case 0xCB:
            puts("SET 1, E");
            break;

        case 0xCC:
            puts("SET 1, H");
            break;

        case 0xCD:
            puts("SET 1, L");
            break;

        case 0xCE:
            puts("SET 1, (HL)");
            break;

        case 0xCF:
            puts("SET 1, A");
            break;

        case 0xD0:
            puts("SET 2, B");
            break;

        case 0xD1:
            puts("SET 2, C");
            break;

        case 0xD2:
            puts("SET 2, D");
            break;

        case 0xD3:
            puts("SET 2, E");
            break;

        case 0xD4:
            puts("SET 2, H");
            break;

        case 0xD5:
            puts("SET 2, L");
            break;

        case 0xD6:
            puts("SET 2, (HL)");
            break;

        case 0xD7:
            puts("SET 2, A");
            break;

        case 0xD8:
            puts("SET 3, B");
            break;

        case 0xD9:
            puts("SET 3, C");
            break;

        case 0xDA:
            puts("SET 3, D");
            break;

        case 0xDB:
            puts("SET 3, E");
            break;

        case 0xDC:
            puts("SET 3, H");
            break;

        case 0xDD:
            puts("SET 3, L");
            break;

        case 0xDE:
            puts("SET 3, (HL)");
            break;

        case 0xDF:
            puts("SET 3, A");
            break;

        case 0xE0:
            puts("SET 4, B");
            break;

        case 0xE1:
            puts("SET 4, C");
            break;

        case 0xE2:
            puts("SET 4, D");
            break;

        case 0xE3:
            puts("SET 4, E");
            break;

        case 0xE4:
            puts("SET 4, H");
            break;

        case 0xE5:
            puts("SET 4, L");
            break;

        case 0xE6:
            puts("SET 4, (HL)");
            break;

        case 0xE7:
            puts("SET 4, A");
            break;

        case 0xE8:
            puts("SET 5, B");
            break;

        case 0xE9:
            puts("SET 5, C");
            break;

        case 0xEA:
            puts("SET 5, D");
            break;

        case 0xEB:
            puts("SET 5, E");
            break;

        case 0xEC:
            puts("SET 5, H");
            break;

        case 0xED:
            puts("SET 5, L");
            break;

        case 0xEE:
            puts("SET 5, (HL)");
            break;

        case 0xEF:
            puts("SET 5, A");
            break;

        case 0xF0:
            puts("SET 6, B");
            break;

        case 0xF1:
            puts("SET 6, C");
            break;

        case 0xF2:
            puts("SET 6, D");
            break;

        case 0xF3:
            puts("SET 6, E");
            break;

        case 0xF4:
            puts("SET 6, H");
            break;

        case 0xF5:
            puts("SET 6, L");
            break;

        case 0xF6:
            puts("SET 6, (HL)");
            break;

        case 0xF7:
            puts("SET 6, A");
            break;

        case 0xF8:
            puts("SET 7, B");
            break;

        case 0xF9:
            puts("SET 7, C");
            break;

        case 0xFA:
            puts("SET 7, D");
            break;

        case 0xFB:
            puts("SET 7, E");
            break;

        case 0xFC:
            puts("SET 7, H");
            break;

        case 0xFD:
            puts("SET 7, L");
            break;

        case 0xFE:
            puts("SET 7, (HL)");
            break;

        case 0xFF:
            puts("SET 7, A");
            break;

        default:
            puts("Unknown opcode");
            break;
    }
}
