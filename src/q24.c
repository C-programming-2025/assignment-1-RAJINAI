#include <stdio.h>
#include <math.h>
int main(){ 
    int num = 16;
    int sqrtNum = (int)sqrt(num);
    int isPerfectSquare = (sqrtNum * sqrtNum == num);
    printf("Is %d a perfect sauare? %d\n", num, isPerfectSquare);
    return 0;
}