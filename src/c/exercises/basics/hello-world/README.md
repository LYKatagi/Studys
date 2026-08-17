# Hello World

## Description

Welcome to your first C exercise!

In this exercise, you will learn how to create a simple function that returns a string.

Your task is to implement the `hello()` function so that it returns:

```text
Hello, World!
```
## Requirements

Implement the following function:

const char* hello(void);

The function must return exactly:

Hello, World!
## Example

A correct implementation should behave like this:

const char* message = hello();


printf("%s\n", message);

## Output:

Hello, World!
Concepts

This exercise introduces:

Functions
Return values
Strings
Header files
const char*
## Files
File	            Purpose
hello-world.c	Your implementation
include/hello-world.h	Function declaration
tests/test.c	Automated tests

## Running the Tests

Compile the exercise together with its tests:

gcc hello-world.c tests/test.c -Iinclude -o test

Then run:

./test

If everything is correct, the program should exit successfully.

## Goal

Make all tests pass without modifying the test files.

Good luck! 🚀