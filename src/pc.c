#include "pc.h"

int pc = 0;

void init_pc() {
    pc = 0;
}

void increment_pc() {
    pc++;
}

void set_pc(int value) {
    pc = value;
}

int get_pc() {
    return pc;
}