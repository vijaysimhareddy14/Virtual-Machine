#include <stdio.h>
#include "pc.h"

int main() {

    init_pc();

    printf("PC = %d\n", get_pc());

    increment_pc();

    printf("PC = %d\n", get_pc());

    increment_pc();

    printf("PC = %d\n", get_pc());

    set_pc(20);

    printf("PC = %d\n", get_pc());

    return 0;
}