// Write a program to input to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main()
{
    int n, original, rem, sum = 0, digits = 0;
    int(sum = 0);
    printf("Enter a number: ");
    scanf("%d ", &n);
    original = n;
    int temp = n;
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp != 0)
    {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }
    if (sum == original)
    {
        printf("The number is an Armstrong number. \n");
    }
    else
    {
        printf("The number is not an Armstrong number. \n");
    }
    return 0;
}