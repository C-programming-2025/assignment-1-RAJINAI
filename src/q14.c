#include <stdio.h>
int main() {
     int x = 5, y = 20;

     x = x + y;
     y = x - y;
     x = x - y;
    
     printf("After swapping: x = %d, y = %d\n", x, y); 
     return 0; 
}