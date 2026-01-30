#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    int myInt = 10;
    printf("Size of int: %zu bytes\n", sizeof(myInt));
    // Hello, World!
    // Size of int: 4 bytes

    float myFloat = 10.1;
    printf("Size of float: %zu bytes\n", sizeof(myFloat));

    double myDouble = 100.10;
    printf("Size of double: %zu bytes\n", sizeof(myDouble));

    char myChar = 'A';
    printf("Size of char: %zu bytes\n", sizeof(myChar));

    return 0;
}