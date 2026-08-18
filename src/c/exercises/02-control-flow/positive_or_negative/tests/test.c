#include <assert.h>
#include "../include/sign.h"

int main(void) {
    // Positive numbers
    assert(sign(1) == 1);
    assert(sign(10) == 1);
    assert(sign(999) == 1);

    // Zero
    assert(sign(0) == 0);

    // Negative numbers
    assert(sign(-1) == -1);
    assert(sign(-10) == -1);
    assert(sign(-999) == -1);

    return 0;
}