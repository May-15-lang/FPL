// Program to perform Logical Operations
#include <stdio.h>
#include <stdbool.h>

int main() {
    bool condition1 = true;
    bool condition2 = false;
    
    bool andOperation = condition1 && condition2; // Logical AND
    bool orOperation = condition1 || condition2;  // Logical OR
    bool notOperation = !condition1;              // Logical NOT
    
    printf("Logical Operations:\n");
    printf("condition1 && condition2: %d\n", andOperation);
    printf("condition1 || condition2: %d\n", orOperation);
    printf("!condition1: %d\n", notOperation);
    
    return 0;
}
