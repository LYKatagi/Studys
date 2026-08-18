#include <assert.h>
#include "../include/max.h"

int main(void) {
    assert(max(5, 3) == 5);
    assert(max(3, 5) == 5);

    assert(max(10, 10) == 10);

    assert(max(-2, -5) == -2);
    assert(max(-5, -2) == -2);

    assert(max(0, 5) == 5);
    assert(max(5, 0) == 5);

    return 0;
}