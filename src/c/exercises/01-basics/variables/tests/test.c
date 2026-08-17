#include <assert.h>
#include <math.h>

#include "../include/variables.h"

int main(void)
{
    assert(get_number() == 42);
    assert(fabsf(get_decimal() - 3.14f) < 0.001f);
    assert(get_letter() == 'A');

    return 0;
}