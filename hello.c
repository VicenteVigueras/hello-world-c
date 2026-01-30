#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    int myInt = 10;
    printf("Size of int: %zu bytes\n", sizeof(myInt));

    float myFloat = 10.1;
    printf("Size of float: %zu bytes\n", sizeof(myFloat));

    double myDouble = 100.10;
    printf("Size of double: %zu bytes\n", sizeof(myDouble));

    char myChar = 'A';
    printf("Size of char: %zu bytes\n", sizeof(myChar));

    char myWord[] = "Example sentence";
    printf("Size of Word: %zu bytes\n", sizeof(myWord));

    /*
    ---------
    Output:
    ---------
    Hello, World!
    Size of int: 4 bytes
    Size of float: 4 bytes
    Size of double: 8 bytes
    Size of char: 1 bytes
    Size of Word: 17 bytes
    ----------
    */

    return 0;
}