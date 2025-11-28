// Write a program to print all factors of a given number is a prime.

#include <stdio.h>
int main()
{
    int n, i, count;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factos of %d are : ", n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
            count++;
        }
    }
    if (count == 2)
    {
        printf(" %d is a prime number. \n", n);
    }
    else
    {
        printf(" %d is not a prime number. \n", n);
    }
    return 0;
}
