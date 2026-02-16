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
    int input;
    int a;
    int b;
    while(1) {
        printf("====================\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("0. Exit\n");
        printf(">> ");
        scanf("%d", &input);
    
        if(input == 0) {
            break;
        }

        if(input == 1) {
            printf("Select A: ");
            scanf("%d", &a);
            printf("Select B: ");
            scanf("%d", &b);
            int sum = add(a,b);
            printf("The sum is: %d\n", sum);
        }

        if(input == 2) {
            printf("Select A: ");
            scanf("%d", &a);
            printf("Select B: ");
            scanf("%d", &b);
            int sum = subtract(a,b);
            printf("The difference is: %d\n", sum);
        }


        if(input == 3) {
            printf("Select A: ");
            scanf("%d", &a);
            printf("Select B: ");
            scanf("%d", &b);
            int sum = multiply(a,b);
            printf("The product is: %d\n", sum);
        }

        if(input == 4) {
            printf("Select A: ");
            scanf("%d", &a);
            printf("Select B: ");
            scanf("%d", &b);
            int sum = divide(a,b);
            printf("The quotient is: %d\n", sum);
        }
    }
    printf("====================\n");
    return 0;
}

