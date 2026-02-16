#include <stdio.h>

int add(int a, int b) {
    int result = a + b;
    return result; 
}

int subtract(int a, int b) {
    int result = a - b;
    return result; 
}

int multiply(int a, int b) {
    int result = a * b;
    return result; 
}

int divide(int a, int b) {
    int result = a / b;
    return result; 
}

int main() {
    int sum = add(1,2);
    int difference = subtract(1,2);
    int product = multiply(1,2);
    int quotient = divide(1,2);
    printf("The sum is: %d\n", sum);
    printf("The difference is: %d\n", difference);
    printf("The product is: %d\n", product);
    printf("The quotient is: %d\n", quotient);
    return 0;
}

