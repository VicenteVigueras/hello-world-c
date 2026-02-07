#include <stdio.h>

int main() {

    // Exercise 1 - Data Types:
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

    Conclusion: There is no String Data Type in C.
    ----------
    */

    // Exercise 2 - Character and ASCII Values:
    printf("%c\n", myWord[0]);  
    printf("%d\n", myWord[0]);   
    printf("%c\n", myWord[16]);  

    /*
    ---------
    Output:
    ---------
    E --> The first character of the string
    69 --> The ASCII value of 'E'
    \0 --> The null terminator character (lets the machine know the string has ended)

    Conclusion: The Word "Example sentence" has 17 characters including the null terminator.
    ----------
    */

    return 0; // Indicates that the program ended successfully
}