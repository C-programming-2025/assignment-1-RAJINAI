#include <stdio.h>

int main() {
    char name[60];
    printf("Enter your name: ");
    scanff("%s", name);
    printf("Hello, %s! Welcome!\n", name);
    return 0;
}