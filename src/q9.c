// Input a number representing days and print the equivalent number of weeks and days.
// Example: 
// Input = 10
// Output = "1 week and 3 days"
#include <_stdio.h>
int main() {
    int totalDays, weeks, days;
    printf("Enter number of days: ");
    scanf("%d", &totalDays);
    weeks = totalDays / 7;
    days = totalDays % 7;
    printf("%d days is equivalent to %d week(s) and %d day(s)\n", totalDays, weeks, days);
    return 0;
}