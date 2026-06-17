#include <stdio.h>

#include "vm.h"
#include "registers.h"
#include "parser.h"

void run_vm()
{
    init_registers();

    printf("========== VM START ==========\n");

    execute_program("programs/add.asm");

    printf("========== VM END ==========\n");
}