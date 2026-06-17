CC=gcc

CFLAGS=-Wall

SRC=src/main.c \
src/vm.c \
src/cpu.c \
src/parser.c \
src/program.c \
src/registers.c \
src/memory.c \
src/instructions.c \
src/stack.c \
src/pc.c

all:
	$(CC) $(CFLAGS) $(SRC) -o vm

run:
	./vm

clean:
	rm -f vm