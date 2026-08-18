#include <assert.h>
#include "../include/calculator.h"

int main(void) {
    // Addition
    assert(calculator(5, 3, '+') == 8);
    assert(calculator(10, 20, '+') == 30);
    assert(calculator(-5, 3, '+') == -2);

    // Subtraction
    assert(calculator(5, 3, '-') == 2);
    assert(calculator(10, 20, '-') == -10);
    assert(calculator(-5, 3, '-') == -8);

    // Multiplication
    assert(calculator(5, 3, '*') == 15);
    assert(calculator(10, 20, '*') == 200);
    assert(calculator(-5, 3, '*') == -15);

    // Integer division
    assert(calculator(10, 5, '/') == 2);
    assert(calculator(7, 2, '/') == 3);
    assert(calculator(-10, 5, '/') == -2);

    // Invalid operator
    assert(calculator(10, 5, '%') == 0);
    assert(calculator(10, 5, 'x') == 0);

    // Division by zero
    assert(calculator(10, 0, '/') == 0);

    return 0;
}