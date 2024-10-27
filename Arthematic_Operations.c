// Program to perform Arthematic Operations
#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;
    
    int addition = a + b;          // Addition
    int subtraction = a - b;       // Subtraction
    int multiplication = a * b;    // Multiplication
    int division = a / b;          // Division
    int modulus = a % b;           // Modulus
    
    printf("Arithmetic Operations:\n");
    printf("Addition: %d + %d = %d\n", a, b, addition);
    printf("Subtraction: %d - %d = %d\n", a, b, subtraction);
    printf("Multiplication: %d * %d = %d\n", a, b, multiplication);
    printf("Division: %d / %d = %d\n", a, b, division);
    printf("Modulus: %d %% %d = %d\n", a, b, modulus);
    
    return 0;
}
