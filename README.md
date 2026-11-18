# COMP 211 Checkoff 3: Chess Engine Bitboards

**Student:** Daniel Falcon

## Overview
This repository contains the code examples and presentation materials for my COMP 211 Checkoff 3 presentation on **Chess Engine Bitboards**. The presentation explores how modern chess engines use 64-bit unsigned integers (`uint64_t`) to represent the state of a chessboard, replacing traditional 2D arrays to achieve massive performance gains through bitwise arithmetic.

## Files in this Repository
*   `code_examples.c`: A self-contained C program demonstrating the core concepts of bitboards, specifically focusing on White Pawn pushes, diagonal attacks, and edge masking to prevent board wrapping.
*   `Daniel_Falcon_Checkoff3_Slides.pptx`: The slide deck used during the presentation.
*   `README.md`: This file.

## Compiling and Running the Code
The C code relies only on standard libraries (`stdio.h` and `stdint.h`) and can be compiled with standard GCC or Clang compilers.

### Compilation
```bash
gcc code_examples.c -o bitboards