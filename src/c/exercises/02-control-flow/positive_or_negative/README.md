# Sign


## Description


Welcome to your first C control-flow exercise!


In this exercise, you will learn how to use conditional statements to determine whether an integer is positive, negative, or zero.


Your task is to implement the `sign()` function so that it returns the sign of a given integer.


## Requirements


Implement the following function:


```c
int sign(int number);
```

The function must return:

1 if the number is positive
0 if the number is zero
-1 if the number is negative

## Example

A correct implementation should behave like this:

```c
int result = sign(10);


printf("%d\n", result);
```

## Output:
```text
1
```

Another example:
```c
int result = sign(-5);


printf("%d\n", result);
```

## Output:
```text
-1
```

For zero:
```c
int result = sign(0);


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
Comparison operators
Conditional statements
if statements
else if statements
else statements
## Files
File	            Purpose
sign.c	            Your implementation
include/sign.h	    Function declaration
tests/test.c	    Automated tests

## Running the Tests

Compile the exercise together with its tests:
```bash
gcc sign.c tests/test.c -Iinclude -o test
```

Then run:
```bash
./test
```
If everything is correct, the program should exit successfully.

## Goal

Make all tests pass without modifying the test files.

Good luck! 🚀