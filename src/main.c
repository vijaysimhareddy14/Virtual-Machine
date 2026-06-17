#include <stdio.h>
#include "memory.h"
#include "registers.h"

int main() {

    init_memory();
    init_registers();

    set_register(0,5);
    set_register(1,10);

    printf("R0 = %d\n",get_register(0));
    printf("R1 = %d\n",get_register(1));

    return 0;
}