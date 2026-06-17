#ifndef PC_H
#define PC_H

extern int pc;

/* Initialize Program Counter */
void init_pc();

/* Move to next instruction */
void increment_pc();

/* Set PC to a specific instruction */
void set_pc(int value);

/* Get current PC value */
int get_pc();

#endif