#include <stdio.h>

#include "vm.h"
#include "parser.h"
#include "cpu.h"
#include "registers.h"

void run_vm()
{
    init_registers();

    load_program("programs/add.asm");

    cpu_run();
}