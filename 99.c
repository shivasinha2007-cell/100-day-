// Q99 (Strings) Change the date format from dd/04/yyyy to dd-Apr-yyyy

#include <stdio.h>
#include <string.h>

int main()
{
    char date[20];
    char day[3], month[3], year[5];

    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%s", date);

    sscanf(date, "%2s/%2s/%4s", day, month, year);

    if (strcmp(month, "04") == 0)
    {
        printf("Formatted date: %s-Apr-%s\n", day, year);
    }
    else
    {
        printf("Month is not April. Original date: %s\n", date);
    }

    return 0;
}
