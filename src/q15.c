#include <stdio.h>
int main() {
    int num = 4;
    int isPositiveAndEven = (num > 0) && ((num / 2) * 2 == num);
    printf(" Is %d positive and even %d/n", num, isPositiveAndEven); // Output will be 1 (true) or 0 (false)
    return 0;
}