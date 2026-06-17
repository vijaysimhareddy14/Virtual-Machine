#include <stdio.h>
#include <string.h>

#include "parser.h"
#include "instructions.h"

void execute_program(const char *filename)
{
    FILE *file = fopen(filename,"r");

    if(file==NULL)
    {
        printf("Cannot open program.\n");
        return;
    }

    char opcode[20];
    char reg1[20];
    char reg2[20];

    int value;

    while(1)
    {
        if(fscanf(file,"%s",opcode)!=1)
            break;

        if(strcmp(opcode,"LOAD")==0)
        {
            fscanf(file,"%s %d",reg1,&value);

            execute_load(reg1[1]-'0',value);
        }

        else if(strcmp(opcode,"ADD")==0)
        {
            fscanf(file,"%s %s",reg1,reg2);

            execute_add(reg1[1]-'0',reg2[1]-'0');
        }

        else if(strcmp(opcode,"PRINT")==0)
        {
            fscanf(file,"%s",reg1);

            execute_print(reg1[1]-'0');
        }

        else if(strcmp(opcode,"HALT")==0)
        {
            break;
        }
    }

    fclose(file);
}