#include "cpu.h"
#include "program.h"
#include "instructions.h"
#include "pc.h"

void cpu_run()
{
    init_pc();

    while(get_pc() < program_size)
    {
        Instruction current = program[get_pc()];

        switch(current.opcode)
        {
            case LOAD:
                execute_load(current.arg1,current.arg2);
                break;

            case ADD:
                execute_add(current.arg1,current.arg2);
                break;

            case STORE:
                execute_store(current.arg1,current.arg2);
                break;

            case LOADM:
                execute_loadm(current.arg1,current.arg2);
                break;

            case PRINT:
                execute_print(current.arg1);
                break;

            case HALT:
                return;
        }

        increment_pc();
    }
}