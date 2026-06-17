#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H

void execute_load(int reg,int value);
void execute_add(int dest,int src);
void execute_sub(int dest,int src);
void execute_mul(int dest,int src);
void execute_div(int dest,int src);

void execute_store(int reg,int address);
void execute_loadm(int reg,int address);

void execute_print(int reg);

#endif