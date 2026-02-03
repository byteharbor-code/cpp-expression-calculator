# C++ CLI Calculator

A command-line calculator built in C++ that evaluates mathematical expressions directly from the terminal.

This project focuses on clean logic, correct operator handling, and a simple user experience without external libraries.

## Features
- Evaluate full expressions (example: `10 + 5 * 2`)
- Operator precedence supported (`*` `/` before `+` `-`)
- Brackets / parentheses support
- Continuous calculation without restarting the program
- Error handling for:
  - Invalid input
  - Division by zero
  - Mismatched brackets

## How It Works
- Uses stacks to process numbers and operators
- Applies operators based on precedence rules
- Evaluates expressions from left to right correctly

## Run
```bash
g++ calculator.cpp -o calculator
./calculator