// Create an expression that swaps the values of three variables x, y, and z in a cyclic order (i.e., x becomes y, y becomes z, and z becomes x).
#include <stdio.h>
int main(){
    int x = 5, y = 20, z = 15;
    x = x + y + z;
    y = x - (y + z);
    z = x - (y + z);
    x = x - (y + z);

    printf("After cyclic swapping: x = %d, y = %d, z = %d\n", x, y ,z);
    return 0;
    
}