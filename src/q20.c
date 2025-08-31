#include <stdio.h>
int main(){
    int num = 15;
    int isMultipleof3or5 = (num / 3) * 3 == num || ( num / 5 ) * 5 == num;
    printf("Is %d a multiple of either 3 or 5 ? %d\n", num, isMultipleof3or5);
    return 0;

}