#include <stdio.h>
#include <string.h>

#include "parser.h"
#include "program.h"

void load_program(const char *filename)
{
    FILE *fp = fopen(filename, "r");

    if(fp == NULL)
    {
        printf("Cannot open file.\n");
        return;
    }

    char opcode[20];
    char reg1[20];
    char reg2[20];

    int value;

    program_size = 0;

    while(fscanf(fp,"%s",opcode)==1)
{
    if(strcmp(opcode,"LOAD")==0)
    {
        fscanf(fp,"%s %d",reg1,&value);

        program[program_size].opcode = LOAD;
        program[program_size].arg1 = reg1[1]-'0';
        program[program_size].arg2 = value;
    }

    else if(strcmp(opcode,"ADD")==0)
    {
        fscanf(fp,"%s %s",reg1,reg2);

        program[program_size].opcode = ADD;
        program[program_size].arg1 = reg1[1]-'0';
        program[program_size].arg2 = reg2[1]-'0';
    }

    else if(strcmp(opcode,"STORE")==0)
    {
        fscanf(fp,"%s %d",reg1,&value);

        program[program_size].opcode = STORE;
        program[program_size].arg1 = reg1[1]-'0';
        program[program_size].arg2 = value;
    }

    else if(strcmp(opcode,"LOADM")==0)
    {
        fscanf(fp,"%s %d",reg1,&value);

        program[program_size].opcode = LOADM;
        program[program_size].arg1 = reg1[1]-'0';
        program[program_size].arg2 = value;
    }

    else if(strcmp(opcode,"PRINT")==0)
    {
        fscanf(fp,"%s",reg1);

        program[program_size].opcode = PRINT;
        program[program_size].arg1 = reg1[1]-'0';
        program[program_size].arg2 = 0;
    }

    else if(strcmp(opcode,"HALT")==0)
    {
        program[program_size].opcode = HALT;
        program[program_size].arg1 = 0;
        program[program_size].arg2 = 0;
    }

    program_size++;
}
    fclose(fp);
}