// Write a C expression that calculates the sum of the squares of three different numbers.
#include <stdio.h>
int main(){
    int a = 2, b = 3, c = 4;
    int sumofSquares = (a * a) + (b * b) + (c * c);
    printf("The sum of square of %d, %d, and %d is %d\n", a, b, c, sumofSquares);
    return 0;
}