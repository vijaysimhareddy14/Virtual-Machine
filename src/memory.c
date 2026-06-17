#include "memory.h"

int memory[MEMORY_SIZE];

void init_memory()
{
    for(int i = 0; i < MEMORY_SIZE; i++)
    {
        memory[i] = 0;
    }
}

void write_memory(int address, int value)
{
    if(address >= 0 && address < MEMORY_SIZE)
    {
        memory[address] = value;
    }
}

int read_memory(int address)
{
    if(address >= 0 && address < MEMORY_SIZE)
    {
        return memory[address];
    }

    return 0;
}