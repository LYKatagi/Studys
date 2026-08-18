#include <assert.h>
#include "../include/par_ou_impar.h"

int main(void) {
    // Even numbers
    assert(is_even(0) == 1);
    assert(is_even(2) == 1);
    assert(is_even(10) == 1);
    assert(is_even(100) == 1);

    // Odd numbers
    assert(is_even(1) == 0);
    assert(is_even(7) == 0);
    assert(is_even(99) == 0);

    // Negative numbers
    assert(is_even(-2) == 1);
    assert(is_even(-7) == 0);

    return 0;
}