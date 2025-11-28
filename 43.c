// Write a program to check if a number is a strong number.

#include <stdio.h>

int factorial(int n)
{
    int fact = 1, i;
    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int num, temp, digit, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0)
    {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if (sum == num && num > 0)
    {
        printf("%d is a strong number.\n", num);
    }
    else
    {
        printf("%d is not a strong number.\n", num);
    }

    return 0;
}
