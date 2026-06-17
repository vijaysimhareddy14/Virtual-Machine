#include "registers.h"

int registers[NUM_REGISTERS];

void init_registers() {

    for(int i=0;i<NUM_REGISTERS;i++) {
        registers[i]=0;
    }

}

void set_register(int reg,int value){

    if(reg>=0 && reg<NUM_REGISTERS)
        registers[reg]=value;

}

int get_register(int reg){

    if(reg>=0 && reg<NUM_REGISTERS)
        return registers[reg];

    return -1;

}