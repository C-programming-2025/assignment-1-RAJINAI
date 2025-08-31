// Create an expression that swaps the values of two variables x and y without using a temporary variable.
#include <stdio.h>
int main() {
     int x = 5, y = 20;

     x = x + y;
     y = x - y;
     x = x - y;
    
     printf("After swapping: x = %d, y = %d\n", x, y); // Output will be: x = 10, y= 5
     return 0; 
}