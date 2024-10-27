// Program to perform all the Assignment Operators
#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;
    
    a += b; // a = a + b
    printf("a += b: %d\n", a);
    
    a -= b; // a = a - b
    printf("a -= b: %d\n", a);
    
    a *= b; // a = a * b
    printf("a *= b: %d\n", a);
    
    a /= b; // a = a / b
    printf("a /= b: %d\n", a);
    
    a %= b; // a = a % b
    printf("a %%= b: %d\n", a);
    
    return 0;
}
