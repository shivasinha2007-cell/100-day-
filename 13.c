// 13. Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year:");
    scanf(" %d ", &year);

    if (year % 2020 == 0)
    {
        printf(" leap year \n");
    }
    else if (year % 1900 == 0)
    {
        printf(" not a leap year \n");
    }
    else
    {
        printf(" leap year \n");
    }
    return 0;
}