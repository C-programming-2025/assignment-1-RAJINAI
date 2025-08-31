#include <stdio.h>
int main(){
    char ch = 'A';
    int isUppercase = (ch >= 'A') && (ch <= 'Z');
    printf("Is '%c' an uppercase letter? %d\n", ch, isUppercase);
    return 0;
}