#ifndef STACK_H
#define STACK_H

#define STACK_SIZE 256

extern int stack[STACK_SIZE];
extern int sp;

void init_stack();
void push(int value);
int pop();

#endif