// Write a C expression that evaluates whether a number is divisible by both 2 and 3 (without using the modulus operator).
#include <stdio.h>
int main (){
    int num= 18;
    int isDivisible = (num / 2) * 2 == num && (num / 3) * 3 == num;
    printf("Is %d divisible by both 2 and 3? %d\n", num, isDivisible); // Output will be 1 (true) or 0 (false)
    return 0 ;
}