#include "stack.h"

int stack[STACK_SIZE];

int sp = -1;

void init_stack()
{
    sp = -1;
}

void push(int value)
{
    if(sp < STACK_SIZE - 1)
    {
        sp++;

        stack[sp] = value;
    }
}

int pop()
{
    if(sp >= 0)
    {
        int value = stack[sp];

        sp--;

        return value;
    }

    return 0;
}