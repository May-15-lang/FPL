#include <stdio.h>

int main() {
    int x = 20;
    int y = 30;
    
    // Ternary Operation
    int max = (x > y) ? x : y;
    
    printf("Ternary Operation:\n");
    printf("The maximum of %d and %d is %d\n", x, y, max);
    
    return 0;
}
