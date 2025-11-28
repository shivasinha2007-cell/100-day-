// Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main()
{
    int totalseconds, hours, minutes, seconds;

    printf("Enter time in seconds \n");

    scanf("%d", &totalseconds);

    hours = totalseconds / 3600;
    minutes = (totalseconds % 3600) / 60;
    seconds = totalseconds % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
