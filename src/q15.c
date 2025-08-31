#include <stdio.h>
int main() {
    int num = 4;
    int isPositiveAndEven = (num > 0) && ((num / 2) * 2 == num);
    printf(" Is %d positive and even %d/n", num, isPositiveAndEven); 
    return 0;
}