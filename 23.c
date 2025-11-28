// Write a program to calculate library fine based on late days as follows
#include <stdio.h>
int main()
{
    int days;
    printf("Enter the number of days the book is late :");
    scanf("%d", &days);
    if (days <= 5)
        printf("The fine is 0.50\n");

    else if (days <= 10)
        printf("The fine is 1.00\n");

    else if (days <= 30)
        printf("The fine is 5.00\n");

    else
        printf("The fine is 10.00\n");
    return 0;
}
