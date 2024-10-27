// Program to perform all the Bitwise Opearations
#include <stdio.h>

int main() {
    int a = 5;   // 0101 in binary
    int b = 3;   // 0011 in binary
    
    int andResult = a & b;    // Bitwise AND
    int orResult = a | b;     // Bitwise OR
    int xorResult = a ^ b;    // Bitwise XOR
    int notResult = ~a;       // Bitwise NOT
    int leftShift = a << 1;   // Left Shift
    int rightShift = a >> 1;  // Right Shift
    
    printf("Bitwise Operations:\n");
    printf("a & b: %d\n", andResult);
    printf("a | b: %d\n", orResult);
    printf("a ^ b: %d\n", xorResult);
    printf("~a: %d\n", notResult);
    printf("a << 1: %d\n", leftShift);
    printf("a >> 1: %d\n", rightShift);
    
    return 0;
}
