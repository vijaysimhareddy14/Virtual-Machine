#ifndef REGISTERS_H
#define REGISTERS_H

#define NUM_REGISTERS 8

extern int registers[NUM_REGISTERS];

void init_registers();
void set_register(int reg, int value);
int get_register(int reg);

#endif