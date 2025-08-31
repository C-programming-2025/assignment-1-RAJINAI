// Given three variables a, b, and c, write an expression that checks if a is greater than b and c is not equal to 0.
#include <stdio.h>
int main(){
    int a = 5, b = 3, c = 2;
    int result = (a > b) && (c != 0);
    printf("Result: %d\n", result); // output will be 1 (true) or 0 (false)
    return 0;
}