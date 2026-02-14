#include <stdio.h>

int add_numbers(int a, int b) {
    int result = a + b;
    return result; 
}

int main() {
    int sum = add_numbers(1,2);
    printf("The sum is: %d\n", sum);
    return 0;
}

