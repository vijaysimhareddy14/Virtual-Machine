#include <stdio.h>
#include "instructions.h"
#include "registers.h"

void execute_load(int reg, int value)
{
    set_register(reg, value);
}

void execute_add(int dest, int src)
{
    int result = get_register(dest) + get_register(src);
    set_register(dest, result);
}

void execute_print(int reg)
{
    printf("%d\n", get_register(reg));
}