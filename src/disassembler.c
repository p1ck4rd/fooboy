#include "disassembler.h"

#include <stdio.h>

unsigned char disassemble(unsigned char *buffer, int pc) {
    unsigned char length = 1;
    unsigned char opcode = buffer[pc];
    printf("PC: %X Opcode: %X\n", pc, opcode);

    switch (opcode) {
        case 0x01:
            printf("LD BC, %X%X\n", buffer[pc + 2], buffer[pc + 1]);
            length += 2;
            break;

        case 0x02:
            printf("LD (BC), A\n");
            break;

        case 0x06:
            printf("LD B, %X\n", buffer[pc + 1]);
            length++;
            break;

        case 0x08:
            printf("LD (%X%X), SP\n", buffer[pc + 2], buffer[pc + 1]);
            length += 2;
            break;

        case 0x0A:
            printf("LD A, (BC)\n");
            break;

        case 0x0E:
            printf("LD C, %X\n", buffer[pc + 1]);
            length++;
            break;

        case 0x11:
            printf("LD DE, %X%X\n", buffer[pc + 2], buffer[pc + 1]);
            length += 2;
            break;

        case 0x12:
            printf("LD (DE), A\n");
            break;

        case 0x16:
            printf("LD D, %X\n", buffer[pc + 1]);
            length++;
            break;

        case 0x1A:
            printf("LD A, (DE)\n");
            break;

        case 0x1E:
            printf("LD E, %X\n", buffer[pc + 1]);
            length++;
            break;

        case 0x21:
            printf("LD HL, %X%X\n", buffer[pc + 2], buffer[pc + 1]);
            length += 2;
            break;

        case 0x22:
            printf("LD (HL+), A\n");
            break;

        case 0x26:
            printf("LD H, %X\n", buffer[pc + 1]);
            length++;
            break;

        case 0x2A:
            printf("LD A, (HL+)\n");
            break;

        case 0x2E:
            printf("LD L, %x\n", buffer[pc + 1]);
            length++;
            break;

        case 0x31:
            printf("LD SP, %X%X\n", buffer[pc + 2], buffer[pc + 1]);
            length += 2;
            break;

        case 0x32:
            printf("LD (HL-), A\n");
            break;

        case 0x36:
            printf("LD (HL), %X\n", buffer[pc + 1]);
            length++;
            break;

        case 0x3A:
            printf("LD A, (HL-)\n");
            break;

        case 0x3E:
            printf("LD A, %X\n", buffer[pc + 1]);
            length++;
            break;

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

        case 0x46:
            printf("LD B, (HL)\n");
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

        case 0x4E:
            printf("LD C, (HL)\n");
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

        case 0x56:
            printf("LD D, (HL)\n");
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

        case 0x5E:
            printf("LD E, (HL)\n");
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

        case 0x66:
            printf("LD H, (HL)\n");
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

        case 0x6E:
            printf("LD L, (HL)\n");
            break;

        case 0x6F:
            printf("LD L, A\n");
            break;

        case 0x70:
            printf("LD (HL), B\n");
            break;

        case 0x71:
            printf("LD (HL), C\n");
            break;

        case 0x72:
            printf("LD (HL), D\n");
            break;

        case 0x73:
            printf("LD (HL), E\n");
            break;

        case 0x74:
            printf("LD (HL), H\n");
            break;

        case 0x75:
            printf("LD (HL), L\n");
            break;

        case 0x77:
            printf("LD (HL), A\n");
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

        case 0x7E:
            printf("LD A, (HL)\n");
            break;

        case 0x7F:
            printf("LD A, A\n");
            break;

        case 0x80:
            printf("ADD B\n");
            break;

        case 0x81:
            printf("ADD C\n");
            break;

        case 0x82:
            printf("ADD D\n");
            break;

        case 0x83:
            printf("ADD E\n");
            break;

        case 0x84:
            printf("ADD H\n");
            break;

        case 0x85:
            printf("ADD L\n");
            break;

        case 0x86:
            printf("ADD (HL)\n");
            break;

        case 0x87:
            printf("ADD A\n");
            break;

        case 0x88:
            printf("ADC B\n");
            break;

        case 0x89:
            printf("ADC C\n");
            break;

        case 0x8A:
            printf("ADC D\n");
            break;

        case 0x8B:
            printf("ADC E\n");
            break;

        case 0x8C:
            printf("ADC H\n");
            break;

        case 0x8D:
            printf("ADC L\n");
            break;

        case 0x8E:
            printf("ADC (HL)\n");
            break;

        case 0x8F:
            printf("ADC A\n");
            break;

        case 0x90:
            printf("SUB B\n");
            break;

        case 0x91:
            printf("SUB C\n");
            break;

        case 0x92:
            printf("SUB D\n");
            break;

        case 0x93:
            printf("SUB E\n");
            break;

        case 0x94:
            printf("SUB H\n");
            break;

        case 0x95:
            printf("SUB L\n");
            break;

        case 0x96:
            printf("SUB (HL)\n");
            break;

        case 0x97:
            printf("SUB A\n");
            break;

        case 0x98:
            printf("SBC B\n");
            break;

        case 0x99:
            printf("SBC C\n");
            break;

        case 0x9A:
            printf("SBC D\n");
            break;

        case 0x9B:
            printf("SBC E\n");
            break;

        case 0x9C:
            printf("SBC H\n");
            break;

        case 0x9D:
            printf("SBC L\n");
            break;

        case 0x9E:
            printf("SBC (HL)\n");
            break;

        case 0x9F:
            printf("SBC A\n");
            break;

        case 0xA0:
            printf("AND B\n");
            break;

        case 0xA1:
            printf("AND C\n");
            break;

        case 0xA2:
            printf("AND D\n");
            break;

        case 0xA3:
            printf("AND E\n");
            break;

        case 0xA4:
            printf("AND H\n");
            break;

        case 0xA5:
            printf("AND L\n");
            break;

        case 0xA6:
            printf("AND (HL)\n");
            break;

        case 0xA7:
            printf("AND A\n");
            break;

        case 0xA8:
            printf("XOR B\n");
            break;

        case 0xA9:
            printf("XOR C\n");
            break;

        case 0xAA:
            printf("XOR D\n");
            break;

        case 0xAB:
            printf("XOR E\n");
            break;

        case 0xAC:
            printf("XOR H\n");
            break;

        case 0xAD:
            printf("XOR L\n");
            break;

        case 0xAE:
            printf("XOR (HL)\n");
            break;

        case 0xAF:
            printf("XOR A\n");
            break;

        case 0xB0:
            printf("OR B\n");
            break;

        case 0xB1:
            printf("OR C\n");
            break;

        case 0xB2:
            printf("OR D\n");
            break;

        case 0xB3:
            printf("OR E\n");
            break;

        case 0xB4:
            printf("OR H\n");
            break;

        case 0xB5:
            printf("OR L\n");
            break;

        case 0xB6:
            printf("OR (HL)\n");
            break;

        case 0xB7:
            printf("OR A\n");
            break;

        case 0xC1:
            printf("POP BC\n");
            break;

        case 0xC5:
            printf("PUSH BC\n");
            break;

        case 0xC6:
            printf("ADD %X\n", buffer[pc + 1]);
            length++;
            break;

        case 0xCE:
            printf("ADC %X\n", buffer[pc + 1]);
            length++;
            break;

        case 0xD1:
            printf("POP DE\n");
            break;

        case 0xD5:
            printf("PUSH DE\n");
            break;

        case 0xD6:
            printf("SUB %X\n", buffer[pc + 1]);
            length++;
            break;

        case 0xDE:
            printf("SBC %X\n", buffer[pc + 1]);
            length++;
            break;

        case 0xE0:
            printf("LDH (%X), A\n", buffer[pc + 1]);
            length++;
            break;

        case 0xE1:
            printf("POP HL\n");
            break;

        case 0xE2:
            printf("LDH (C), A\n");
            break;

        case 0xE5:
            printf("PUSH HL\n");
            break;

        case 0xE6:
            printf("AND %X\n", buffer[pc + 1]);
            length++;
            break;

        case 0xEA:
            printf("LD (%X%X), A\n", buffer[pc + 2], buffer[pc + 1]);
            length += 2;
            break;

        case 0xEE:
            printf("XOR %X\n", buffer[pc + 1]);
            length++;
            break;

        case 0xF0:
            printf("LDH A, (%X)\n", buffer[pc + 1]);
            length++;
            break;

        case 0xF1:
            printf("POP AF\n");
            break;

        case 0xF2:
            printf("LDH A, (C)\n");
            break;

        case 0xF5:
            printf("PUSH AF\n");
            break;

        case 0xF6:
            printf("OR %X\n", buffer[pc + 1]);
            break;

        case 0xF8:
            printf("LD HL, SP+%d\n", (signed char) buffer[pc + 1]);
            length++;
            break;

        case 0xF9:
            printf("LD SP, HL\n");
            break;

        case 0xFA:
            printf("LD A, (%X%X)\n", buffer[pc + 2], buffer[pc + 1]);
            length += 2;
            break;

        default:
            printf("Unknown opcode\n");
            break;
    }

    return length;
}
