#include <stdio.h>

struct Time 
{
    unsigned int hours;
    unsigned int minutes;
    unsigned int seconds;
    unsigned int day;
    unsigned int month;
    unsigned int year;
};

main() 
{
    struct Time time;
    printf("Enter the time in the format (HH:MM:SS DD/MM/YYYY): ");
    scanf("%d:%d:%d %d/%d/%d", &time.hours, &time.minutes, &time.seconds, &time.day, &time.month, &time.year);
    printf("Time entered: %02d:%02d:%02d %02d/%02d/%04d\n", time.hours, time.minutes, time.seconds, time.day, time.month, time.year);
    printf("Sizeof struct Time: %zu bytes\n", sizeof(struct Time));
}
