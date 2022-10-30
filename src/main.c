#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

#include "disassembler/disassembler.h"

int main(int argc, char* argv[]) {
    if (argc == 1) {
        errno = EINVAL;
        perror("No input file");

        return EXIT_FAILURE;
    }

    FILE* fp = fopen(argv[1], "rb");
    if (fp == NULL) {
        perror("File opening failed");

        return EXIT_FAILURE;
    }

    fseek(fp, 0L, SEEK_END);
    unsigned int fileSize = ftell(fp);
    fseek(fp, 0L, SEEK_SET);

    unsigned char* contents = malloc(fileSize);
    fread(contents, sizeof(unsigned char), fileSize, fp);

    unsigned int pc = 0;
    while (pc < fileSize) {
        pc += disassemble(contents, pc);
    }

    free(contents);

    fclose(fp);

    return EXIT_SUCCESS;
}
