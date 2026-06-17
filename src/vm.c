#include "vm.h"
#include "parser.h"
#include "cpu.h"
#include "registers.h"
#include "memory.h"



void run_vm()
{
    init_registers();

    init_memory();
    init_stack();
    load_program("programs/add.asm");

    cpu_run();
}