# Calculator


## Description


Welcome to your final C exercise in the basics section!


In this exercise, you will learn how to use arithmetic operators and conditional statements to create a simple calculator.


Your task is to implement the `calculator()` function so that it performs an arithmetic operation between two integers.


## Requirements


Implement the following function:


```c
int calculator(int a, int b, char operator);
```

The function must support the following operators:

Operator	Operation
+	Addition
-	Subtraction
*	Multiplication
/	Integer division


If the operator is invalid, the function must return 0.

If division by zero is attempted, the function must also return 0.

## Example

A correct implementation should behave like this:
```c
int result = calculator(10, 5, '+');


printf("%d\n", result);
```
## Output:
```text
15
```

## Another example:
```c
int result = calculator(10, 5, '*');


printf("%d\n", result);
```
## Output:
```text
50
```

## For integer division:
```c
int result = calculator(7, 2, '/');


printf("%d\n", result);
```

## Output:
```text
3
```

## For an invalid operator:
```c
int result = calculator(10, 5, '%');


printf("%d\n", result);
```
## Output:
```text
0
```
## Concepts

This exercise introduces:

Functions
Return values
Integers
Arithmetic operators
Character values
Conditional statements
switch statements
Division by zero

## Files

File	                Purpose
calculator.c	        Your implementation
include/calculator.h	Function declaration
tests/test.c	        Automated tests

## Running the Tests

Compile the exercise together with its tests:
```bash
gcc calculator.c tests/test.c -Iinclude -o test
```

Then run:
```bash
./test
```

If everything is correct, the program should exit successfully.

## Goal

Make all tests pass without modifying the test files.

Good luck! 🚀