# Max

## Description

Welcome to your next C exercise!

In this exercise, you will learn how to use comparison operators and conditional statements to determine the greater of two integers.

Your task is to implement the max() function so that it returns the largest of two given integers.

## Requirements

Implement the following function:

int max(int a, int b);

The function must return the greater value between a and b.

If both values are equal, the function should return either value.

## Example

A correct implementation should behave like this:
```c
int result = max(5, 3);


printf("%d\n", result);
```
## Output:
```text
5
```
Another example:
```c
int result = max(2, 8);


printf("%d\n", result);
```
## Output:
```text
8
```

## Concepts

This exercise introduces:

Functions
Return values
Integers
Comparison operators
Conditional statements
if statements

## Files

File	        Purpose
max.c	        Your implementation
include/max.h	Function declaration
tests/test.c	Automated tests

## Running the Tests

Compile the exercise together with its tests:
```bash
gcc max.c tests/test.c -Iinclude -o test
```
Then run:
```bash
./test
```
If everything is correct, the program should exit successfully.

## Goal

Make all tests pass without modifying the test files.

Good luck! 🚀