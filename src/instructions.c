#include <stdio.h>

#include "instructions.h"
#include "registers.h"
#include "memory.h"

void execute_load(int reg, int value)
{
    set_register(reg, value);
}

void execute_add(int dest, int src)
{
    set_register(dest,
                 get_register(dest) + get_register(src));
}

void execute_print(int reg)
{
    printf("%d\n", get_register(reg));
}

void execute_store(int reg, int address)
{
    write_memory(address, get_register(reg));
}

void execute_loadm(int reg, int address)
{
    set_register(reg, read_memory(address));
}