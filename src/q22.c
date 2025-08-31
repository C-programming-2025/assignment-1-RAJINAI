// Write a C expression that calculates the square root of the sum of two numbers, rounded to the nearest integer.
#include <stdio.h>
#include <math.h>
int main (){
    int a = 9, b = 16;
    int result = (int)round(sqrt(a + b));
    printf("The square root of the sum of %d and %d, rounded to the nearest integer, is %d\n", a, b, result);
    return 0; 
}