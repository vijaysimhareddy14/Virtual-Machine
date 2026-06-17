#include <stdio.h>
#include "vm.h"
#include "pc.h"

void run_vm() {

    init_pc();

    printf("========== Virtual Machine ==========\n");

    while(get_pc() < 5){

        printf("Executing instruction %d\n", get_pc());

        increment_pc();

    }

    printf("========== VM Finished ==========\n");

}