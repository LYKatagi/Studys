# Par ou Ímpar

## Description

Welcome to your next C exercise!

In this exercise, you will learn how to use conditional statements and the modulo operator to determine whether a number is even or odd.

Your task is to implement the `is_even()` function so that it returns whether a given integer is even.

## Requirements

Implement the following function:

```c
int is_even(int number);
```

The function must return:

* `1` if the number is even
* `0` if the number is odd

## Example

A correct implementation should behave like this:

```c
int result = is_even(10);

printf("%d\n", result);
```

## Output:

```text
1
```

For an odd number:

```c
int result = is_even(7);

printf("%d\n", result);
```

## Output:

```text
0
```

## Concepts

This exercise introduces:

* Functions
* Return values
* Integers
* Conditional statements
* Modulo operator (`%`)
* Boolean-like values

## Files

| File                     | Purpose              |
| ------------------------ | -------------------- |
| `par_or_impar.c`         | Your implementation  |
| `include/par_or_impar.h` | Function declaration |
| `tests/test.c`           | Automated tests      |

## Running the Tests

Compile the exercise together with its tests:

```bash
gcc par_or_impar.c tests/test.c -Iinclude -o test
```

Then run:

```bash
./test
```

If everything is correct, the program should exit successfully.

## Goal

Make all tests pass without modifying the test files.

Good luck! 🚀
