#include <stdio.h>

int* getStaticValue() {
    static int num = 42;  // Static variable retains value after function exits
    return &num;
}

int main() {
    int *ptr = getStaticValue();
    printf("Value: %d\n", *ptr);
    return 0;
}

