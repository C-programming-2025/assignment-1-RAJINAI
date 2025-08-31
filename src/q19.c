// Given three variables a, b, and c, write an expression that checks if a is equal to b and b is not equal to c.
#include <stdio.h>
int main(){
    int a = 5, b =5, c = 2;
    int result = ( a == b) && (b !=c);
    printf("Result: %d\n", result);
    return 0;
}