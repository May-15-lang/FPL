// Program to perform all the Unary Operations
#include <stdio.h>

int main() {
    int a = 10;
    int b = -5;
    int c = 3;
    
    // Unary Operations
    int positive = +a;      // Unary Plus (no effect)
    int negative = -a;      // Unary Minus (negates the value)
    int increment = ++c;    // Pre-increment (increases the value before use)
    int decrement = --c;    // Pre-decrement (decreases the value before use)
    
    printf("Unary Operations:\n");
    printf("Positive (no effect): +a = %d\n", positive);
    printf("Negative: -a = %d\n", negative);
    printf("Pre-increment: ++c = %d\n", increment);
    printf("Pre-decrement: --c = %d\n", decrement);
    
    // Post-increment and Post-decrement demonstration
    int postIncrement = a++; // Uses the current value, then increments
    int postDecrement = b--; // Uses the current value, then decrements
    
    printf("Post-increment (a++): %d, now a = %d\n", postIncrement, a);
    printf("Post-decrement (b--): %d, now b = %d\n", postDecrement, b);

    return 0;
}
