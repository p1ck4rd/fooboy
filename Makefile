build:
	gcc src/main.c src/disassembler/disassembler.c \
		src/disassembler/cb_disassembler.c -o fooboy.out

all: build
