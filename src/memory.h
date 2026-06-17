#ifndef MEMORY_H
#define MEMORY_H

#define MEMORY_SIZE 1024

extern int memory[MEMORY_SIZE];

void init_memory();
void write_memory(int address, int value);
int read_memory(int address);

#endif