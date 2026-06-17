#ifndef PROGRAM_H
#define PROGRAM_H

#define MAX_PROGRAM_SIZE 100

typedef struct
{
    char opcode[20];

    int arg1;

    int arg2;

} Instruction;

extern Instruction program[MAX_PROGRAM_SIZE];

extern int program_size;

#endif