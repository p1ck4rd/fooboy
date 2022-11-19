#include "disassembler.h"

#include <stdio.h>

#include "cb_disassembler.h"

unsigned char disassemble(unsigned char *buffer, int pc) {
    unsigned char length = 1;
    unsigned char opcode = buffer[pc];
    printf("PC: %X OP: %X\n", pc, opcode);

    switch (opcode) {
        case 0x01:
            printf("LD BC, %X%X\n", buffer[pc + 2], buffer[pc + 1]);
            length += 2;
            break;

        case 0x02:
            puts("LD (BC), A");
            break;

        case 0x03:
            puts("INC BC");
            break;

        case 0x04:
            puts("INC B");
            break;

        case 0x05:
            puts("DEC B");
            break;

        case 0x06:
            printf("LD B, %X\n", buffer[pc + 1]);
            length++;
            break;

        case 0x07:
            puts("RLCA");
            break;

        case 0x08:
            printf("LD (%X%X), SP\n", buffer[pc + 2], buffer[pc + 1]);
            length += 2;
            break;

        case 0x09:
            puts("ADD HL, BC");
            break;

        case 0x0A:
            puts("LD A, (BC)");
            break;

        case 0x0B:
            puts("DEC BC");
            break;

        case 0x0C:
            puts("INC C");
            break;

        case 0x0D:
            puts("DEC C");
            break;

        case 0x0E:
            printf("LD C, %X\n", buffer[pc + 1]);
            length++;
            break;

        case 0x0F:
            puts("RRCA");
            break;

        case 0x11:
            printf("LD DE, %X%X\n", buffer[pc + 2], buffer[pc + 1]);
            length += 2;
            break;

        case 0x12:
            puts("LD (DE), A");
            break;

        case 0x13:
            puts("INC DE");
            break;

        case 0x14:
            puts("INC D");
            break;

        case 0x15:
            puts("DEC D");
            break;

        case 0x16:
            printf("LD D, %X\n", buffer[pc + 1]);
            length++;
            break;

        case 0x17:
            puts("RLA");
            break;

        case 0x18:
            printf("JR %d\n", (signed char) buffer[pc + 1]);
            length++;
            break;


        case 0x19:
            puts("ADD HL, DE");
            break;

        case 0x1A:
            puts("LD A, (DE)");
            break;

        case 0x1B:
            puts("DEC DE");
            break;

        case 0x1C:
            puts("INC E");
            break;

        case 0x1D:
            puts("DEC E");
            break;

        case 0x1E:
            printf("LD E, %X\n", buffer[pc + 1]);
            length++;
            break;

        case 0x1F:
            puts("RRA");
            break;

        case 0x20:
            printf("JR nz, %d\n", (signed char) buffer[pc + 1]);
            length++;
            break;

        case 0x21:
            printf("LD HL, %X%X\n", buffer[pc + 2], buffer[pc + 1]);
            length += 2;
            break;

        case 0x22:
            puts("LD (HL+), A");
            break;

        case 0x23:
            puts("INC HL");
            break;

        case 0x24:
            puts("INC H");
            break;

        case 0x25:
            puts("DEC H");
            break;

        case 0x26:
            printf("LD H, %X\n", buffer[pc + 1]);
            length++;
            break;

        case 0x28:
            printf("JR z, %d\n", (signed char) buffer[pc + 1]);
            length++;
            break;

        case 0x29:
            puts("ADD HL, HL");
            break;

        case 0x2A:
            puts("LD A, (HL+)");
            break;

        case 0x2B:
            puts("DEC HL");
            break;

        case 0x2C:
            puts("INC L");
            break;

        case 0x2D:
            puts("DEC L");
            break;

        case 0x2E:
            printf("LD L, %x\n", buffer[pc + 1]);
            length++;
            break;

        case 0x30:
            printf("JR nc, %d\n", (signed char) buffer[pc + 1]);
            length++;
            break;

        case 0x31:
            printf("LD SP, %X%X\n", buffer[pc + 2], buffer[pc + 1]);
            length += 2;
            break;

        case 0x32:
            puts("LD (HL-), A");
            break;

        case 0x33:
            puts("INC SP");
            break;

        case 0x34:
            puts("INC (HL)");
            break;

        case 0x35:
            puts("DEC (HL)");
            break;

        case 0x36:
            printf("LD (HL), %X\n", buffer[pc + 1]);
            length++;
            break;

        case 0x38:
            printf("JR c, %d\n", (signed char) buffer[pc + 1]);
            length++;
            break;

        case 0x39:
            puts("ADD HL, SP");
            break;

        case 0x3A:
            puts("LD A, (HL-)");
            break;

        case 0x3B:
            puts("DEC SP");
            break;

        case 0x3C:
            puts("INC A");
            break;

        case 0x3D:
            puts("DEC A");
            break;

        case 0x3E:
            printf("LD A, %X\n", buffer[pc + 1]);
            length++;
            break;

        case 0x40:
            puts("LD B, B");
            break;

        case 0x41:
            puts("LD B, C");
            break;

        case 0x42:
            puts("LD B, D");
            break;

        case 0x43:
            puts("LD B, E");
            break;

        case 0x44:
            puts("LD B, H");
            break;

        case 0x45:
            puts("LD B, L");
            break;

        case 0x46:
            puts("LD B, (HL)");
            break;

        case 0x47:
            puts("LD B, A");
            break;

        case 0x48:
            puts("LD C, B");
            break;

        case 0x49:
            puts("LD C, C");
            break;

        case 0x4A:
            puts("LD C, D");
            break;

        case 0x4B:
            puts("LD C, E");
            break;

        case 0x4C:
            puts("LD C, H");
            break;

        case 0x4D:
            puts("LD C, L");
            break;

        case 0x4E:
            puts("LD C, (HL)");
            break;

        case 0x4F:
            puts("LD C, A");
            break;

        case 0x50:
            puts("LD D, B");
            break;

        case 0x51:
            puts("LD D, C");
            break;

        case 0x52:
            puts("LD D, D");
            break;

        case 0x53:
            puts("LD D, E");
            break;

        case 0x54:
            puts("LD D, H");
            break;

        case 0x55:
            puts("LD D, L");
            break;

        case 0x56:
            puts("LD D, (HL)");
            break;

        case 0x57:
            puts("LD D, A");
            break;

        case 0x58:
            puts("LD E, B");
            break;

        case 0x59:
            puts("LD E, C");
            break;

        case 0x5A:
            puts("LD E, D");
            break;

        case 0x5B:
            puts("LD E, E");
            break;

        case 0x5C:
            puts("LD E, H");
            break;

        case 0x5D:
            puts("LD E, L");
            break;

        case 0x5E:
            puts("LD E, (HL)");
            break;

        case 0x5F:
            puts("LD E, A");
            break;

        case 0x60:
            puts("LD H, B");
            break;

        case 0x61:
            puts("LD H, C");
            break;

        case 0x62:
            puts("LD H, D");
            break;

        case 0x63:
            puts("LD H, E");
            break;

        case 0x64:
            puts("LD H, H");
            break;

        case 0x65:
            puts("LD H, L");
            break;

        case 0x66:
            puts("LD H, (HL)");
            break;

        case 0x67:
            puts("LD H, A");
            break;

        case 0x68:
            puts("LD L, B");
            break;

        case 0x69:
            puts("LD L, C");
            break;

        case 0x6A:
            puts("LD L, D");
            break;

        case 0x6B:
            puts("LD L, E");
            break;

        case 0x6C:
            puts("LD L, H");
            break;

        case 0x6D:
            puts("LD L, L");
            break;

        case 0x6E:
            puts("LD L, (HL)");
            break;

        case 0x6F:
            puts("LD L, A");
            break;

        case 0x70:
            puts("LD (HL), B");
            break;

        case 0x71:
            puts("LD (HL), C");
            break;

        case 0x72:
            puts("LD (HL), D");
            break;

        case 0x73:
            puts("LD (HL), E");
            break;

        case 0x74:
            puts("LD (HL), H");
            break;

        case 0x75:
            puts("LD (HL), L");
            break;

        case 0x77:
            puts("LD (HL), A");
            break;

        case 0x78:
            puts("LD A, B");
            break;

        case 0x79:
            puts("LD A, C");
            break;

        case 0x7A:
            puts("LD A, D");
            break;

        case 0x7B:
            puts("LD A, E");
            break;

        case 0x7C:
            puts("LD A, H");
            break;

        case 0x7D:
            puts("LD A, L");
            break;

        case 0x7E:
            puts("LD A, (HL)");
            break;

        case 0x7F:
            puts("LD A, A");
            break;

        case 0x80:
            puts("ADD B");
            break;

        case 0x81:
            puts("ADD C");
            break;

        case 0x82:
            puts("ADD D");
            break;

        case 0x83:
            puts("ADD E");
            break;

        case 0x84:
            puts("ADD H");
            break;

        case 0x85:
            puts("ADD L");
            break;

        case 0x86:
            puts("ADD (HL)");
            break;

        case 0x87:
            puts("ADD A");
            break;

        case 0x88:
            puts("ADC B");
            break;

        case 0x89:
            puts("ADC C");
            break;

        case 0x8A:
            puts("ADC D");
            break;

        case 0x8B:
            puts("ADC E");
            break;

        case 0x8C:
            puts("ADC H");
            break;

        case 0x8D:
            puts("ADC L");
            break;

        case 0x8E:
            puts("ADC (HL)");
            break;

        case 0x8F:
            puts("ADC A");
            break;

        case 0x90:
            puts("SUB B");
            break;

        case 0x91:
            puts("SUB C");
            break;

        case 0x92:
            puts("SUB D");
            break;

        case 0x93:
            puts("SUB E");
            break;

        case 0x94:
            puts("SUB H");
            break;

        case 0x95:
            puts("SUB L");
            break;

        case 0x96:
            puts("SUB (HL)");
            break;

        case 0x97:
            puts("SUB A");
            break;

        case 0x98:
            puts("SBC B");
            break;

        case 0x99:
            puts("SBC C");
            break;

        case 0x9A:
            puts("SBC D");
            break;

        case 0x9B:
            puts("SBC E");
            break;

        case 0x9C:
            puts("SBC H");
            break;

        case 0x9D:
            puts("SBC L");
            break;

        case 0x9E:
            puts("SBC (HL)");
            break;

        case 0x9F:
            puts("SBC A");
            break;

        case 0xA0:
            puts("AND B");
            break;

        case 0xA1:
            puts("AND C");
            break;

        case 0xA2:
            puts("AND D");
            break;

        case 0xA3:
            puts("AND E");
            break;

        case 0xA4:
            puts("AND H");
            break;

        case 0xA5:
            puts("AND L");
            break;

        case 0xA6:
            puts("AND (HL)");
            break;

        case 0xA7:
            puts("AND A");
            break;

        case 0xA8:
            puts("XOR B");
            break;

        case 0xA9:
            puts("XOR C");
            break;

        case 0xAA:
            puts("XOR D");
            break;

        case 0xAB:
            puts("XOR E");
            break;

        case 0xAC:
            puts("XOR H");
            break;

        case 0xAD:
            puts("XOR L");
            break;

        case 0xAE:
            puts("XOR (HL)");
            break;

        case 0xAF:
            puts("XOR A");
            break;

        case 0xB0:
            puts("OR B");
            break;

        case 0xB1:
            puts("OR C");
            break;

        case 0xB2:
            puts("OR D");
            break;

        case 0xB3:
            puts("OR E");
            break;

        case 0xB4:
            puts("OR H");
            break;

        case 0xB5:
            puts("OR L");
            break;

        case 0xB6:
            puts("OR (HL)");
            break;

        case 0xB7:
            puts("OR A");
            break;

        case 0xB8:
            puts("CP B");
            break;

        case 0xB9:
            puts("CP C");
            break;

        case 0xBA:
            puts("CP D");
            break;

        case 0xBB:
            puts("CP E");
            break;

        case 0xBC:
            puts("CP H");
            break;

        case 0xBD:
            puts("CP L");
            break;

        case 0xBE:
            puts("CP (HL)");
            break;

        case 0xBF:
            puts("CP A");
            break;

        case 0xC0:
            puts("RET nz");
            break;

        case 0xC1:
            puts("POP BC");
            break;

        case 0xC2:
            printf("JP nz, %X%X\n", buffer[pc + 2], buffer[pc + 1]);
            length += 2;
            break;

        case 0xC3:
            printf("JP %X%X\n", buffer[pc + 2], buffer[pc + 1]);
            length += 2;
            break;

        case 0xC4:
            printf("CALL nz, %X%X\n", buffer[pc + 2], buffer[pc + 1]);
            length += 2;
            break;

        case 0xC5:
            puts("PUSH BC");
            break;

        case 0xC6:
            printf("ADD %X\n", buffer[pc + 1]);
            length++;
            break;

        case 0xC7:
            puts("RST 0x00");
            break;

        case 0xC8:
            puts("RET z");
            break;

        case 0xC9:
            puts("RET");
            break;

        case 0xCA:
            printf("JP z, %X%X\n", buffer[pc + 2], buffer[pc + 1]);
            length += 2;
            break;

        case 0xCB:
            disassembleCB(buffer[pc + 1]);
            length++;
            break;

        case 0xCC:
            printf("CALL z, %X%X\n", buffer[pc + 2], buffer[pc + 1]);
            length += 2;
            break;

        case 0xCD:
            printf("CALL %X%X\n", buffer[pc + 2], buffer[pc + 1]);
            length += 2;
            break;

        case 0xCE:
            printf("ADC %X\n", buffer[pc + 1]);
            length++;
            break;

        case 0xCF:
            puts("RST 0x08");
            break;

        case 0xD0:
            puts("RET nc");
            break;

        case 0xD1:
            puts("POP DE");
            break;

        case 0xD2:
            printf("JP nc, %X%X\n", buffer[pc + 2], buffer[pc + 1]);
            length += 2;
            break;

        case 0xD4:
            printf("CALL nc, %X%X\n", buffer[pc + 2], buffer[pc + 1]);
            length += 2;
            break;

        case 0xD5:
            puts("PUSH DE");
            break;

        case 0xD6:
            printf("SUB %X\n", buffer[pc + 1]);
            length++;
            break;

        case 0xD7:
            puts("RST 0x10");
            break;

        case 0xD8:
            puts("RET c");
            break;

        case 0xD9:
            puts("RETI");
            break;

        case 0xDA:
            printf("JP c, %X%X\n", buffer[pc + 2], buffer[pc + 1]);
            length += 2;
            break;

        case 0xDC:
            printf("CALL c, %X%X\n", buffer[pc + 2], buffer[pc + 1]);
            length += 2;
            break;

        case 0xDE:
            printf("SBC %X\n", buffer[pc + 1]);
            length++;
            break;

        case 0xDF:
            puts("RST 0x18");
            break;

        case 0xE0:
            printf("LDH (%X), A\n", buffer[pc + 1]);
            length++;
            break;

        case 0xE1:
            puts("POP HL");
            break;

        case 0xE2:
            puts("LDH (C), A");
            break;

        case 0xE5:
            puts("PUSH HL");
            break;

        case 0xE6:
            printf("AND %X\n", buffer[pc + 1]);
            length++;
            break;

        case 0xE7:
            puts("RST 0x20");
            break;

        case 0xE8:
            printf("ADD SP, %d\n", (signed char) buffer[pc + 1]);
            length++;
            break;

        case 0xE9:
            puts("JP HL");
            break;

        case 0xEA:
            printf("LD (%X%X), A\n", buffer[pc + 2], buffer[pc + 1]);
            length += 2;
            break;

        case 0xEE:
            printf("XOR %X\n", buffer[pc + 1]);
            length++;
            break;

        case 0xEF:
            puts("RST 0x28");
            break;

        case 0xF0:
            printf("LDH A, (%X)\n", buffer[pc + 1]);
            length++;
            break;

        case 0xF1:
            puts("POP AF");
            break;

        case 0xF2:
            puts("LDH A, (C)");
            break;

        case 0xF5:
            puts("PUSH AF");
            break;

        case 0xF6:
            printf("OR %X\n", buffer[pc + 1]);
            length++;
            break;

        case 0xF7:
            puts("RST 0x30");
            break;

        case 0xF8:
            printf("LD HL, SP+%d\n", (signed char) buffer[pc + 1]);
            length++;
            break;

        case 0xF9:
            puts("LD SP, HL");
            break;

        case 0xFA:
            printf("LD A, (%X%X)\n", buffer[pc + 2], buffer[pc + 1]);
            length += 2;
            break;

        case 0xFE:
            printf("CP %X", buffer[pc + 1]);
            length++;
            break;

        case 0xFF:
            puts("RST 0x38");
            break;

        default:
            puts("Unknown opcode");
            break;
    }

    return length;
}
