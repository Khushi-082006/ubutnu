#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main(void) {
    printf("Test 1: %d\n", add(2, 3));
    printf("Test 2: %d\n", add(10, 5));
    return 0;
}
