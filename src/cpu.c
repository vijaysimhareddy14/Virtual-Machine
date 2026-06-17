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
            case SUB:
                execute_sub(current.arg1,current.arg2);
                break;

            case MUL:
                execute_mul(current.arg1,current.arg2);
                break;

            case DIVIDE:
                execute_div(current.arg1,current.arg2);
                break;

            case JMP:
                set_pc(current.arg1);
                continue;
        }

        increment_pc();
    }
}