# Virtual Machine in C

## Overview

This project implements a simple Virtual Machine (VM) in C that simulates a CPU using the Fetch–Decode–Execute cycle.

The VM parses assembly instructions, stores them in program memory, and executes them using virtual registers and memory.

---

## Features

* Parser
* Program Memory
* Program Counter
* Fetch–Decode–Execute Cycle
* Virtual Registers
* Virtual RAM
* Stack
* Arithmetic Instructions
* Jump Instructions

---

## Supported Instructions

```
LOAD
ADD
SUB
MUL
DIV
STORE
LOADM
PRINT
JMP
JZ
JNZ
PUSH
POP
HALT
```

---

## Project Structure

```
VirtualMachine/

src/
programs/
docs/

README.md
Makefile
```

---

## Build

```
make
```

or

```
gcc src/*.c -o vm
```

---

## Run

```
./vm
```

---

## Example Program

```
LOAD R0 5
LOAD R1 10
ADD R0 R1
PRINT R0
HALT
```

Output

```
15
```

---

## Architecture

```
Assembly Program
        │
        ▼
     Parser
        │
        ▼
 Program Memory
        │
        ▼
 Program Counter
        │
        ▼
Fetch → Decode → Execute
        │
 ┌──────┴──────┐
 ▼             ▼
Registers   Virtual Memory
        │
        ▼
      Output
```

---

## Future Work

* Labels
* CALL / RET
* Debugger
* Bytecode execution

---

## Author

Koyyada Vijay Simha Reddy