#include <stdio.h>
int main() {
    int totalDays, weeks, days;
    printf("Enter number of days: ");
    scanf("%d", &totalDays);
    weeks = totalDays / 7;
    days = totalDays % 7;
    printf("%d days is equivalent to %d week(s) and %d day(s)\n", totalDays, weeks, days);
    return 0;   
}