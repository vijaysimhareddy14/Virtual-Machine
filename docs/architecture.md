# Virtual Machine Architecture

## Overview

The Virtual Machine (VM) is a software implementation of a simple CPU.

It reads an assembly program, stores it in program memory, and executes each instruction using the Fetch–Decode–Execute cycle.

---

## Architecture

```text
                  Assembly Program (.asm)
                           │
                           ▼
                     Parser Module
                           │
                           ▼
                  Program Memory Array
                           │
                           ▼
                   Program Counter (PC)
                           │
                           ▼
                  Fetch Current Instruction
                           │
                           ▼
                  Decode Current Instruction
                           │
                           ▼
                  Execute Instruction
                           │
      ┌────────────────────┼────────────────────┐
      ▼                    ▼                    ▼
  Registers           Virtual Memory          Stack
      │                    │                    │
      └────────────────────┴────────────────────┘
                           │
                           ▼
                         Output
```

---

## Components

### Parser

Reads the assembly source file and converts each instruction into an internal `Instruction` structure.

### Program Memory

Stores all parsed instructions before execution begins.

### Program Counter (PC)

Keeps track of the current instruction being executed.

### CPU

Executes the Fetch–Decode–Execute cycle until a `HALT` instruction is encountered.

### Registers

Temporary storage used for arithmetic and logical operations.

### Virtual Memory

Stores data values at memory addresses.

### Stack

Provides Last-In First-Out (LIFO) storage for PUSH and POP operations.

---

## Execution Cycle

1. Fetch instruction from Program Memory.
2. Decode the opcode.
3. Execute the instruction.
4. Increment the Program Counter.
5. Repeat until HALT.

---

## Example

Assembly program:

```text
LOAD R0 5
LOAD R1 10
ADD R0 R1
PRINT R0
HALT
```

Execution:

```
R0 = 5
R1 = 10
R0 = R0 + R1
PRINT R0

Output: 15
```

---

## Future Enhancements

* Labels
* CALL / RET
* Bytecode execution
* Debug mode
* Interactive shell
* Optimized instruction decoder
