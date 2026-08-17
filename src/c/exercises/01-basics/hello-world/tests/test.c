#include <stdio.h>
#include <string.h>

#include "../include/hello-world.h"

static int tests_passed = 0;
static int tests_failed = 0;

static void test_hello(void)
{
    char buffer[32];

    hello(buffer, sizeof(buffer));

    if (strcmp(buffer, "Hello, World!") == 0) {
        printf("✓ test_hello\n");
        tests_passed++;
    } else {
        printf("✗ test_hello\n");
        printf("  Expected: \"Hello, World!\"\n");
        printf("  Got:      \"%s\"\n", buffer);
        tests_failed++;
    }
}

int main(void)
{
    printf("Running tests...\n\n");

    test_hello();

    printf("\n");
    printf("%d passed, %d failed\n", tests_passed, tests_failed);

    return tests_failed != 0;
}