// write a program to take a number as input and print its equivalent binary representaion.

#include <stdio.h>
int main()
{
    int n, rem, binary = 0, place = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        rem = n % 2;
        binary = binary + rem * place;
        place *= 10;
        n /= 2;
    }
    printf("Binary representation = %d\n", binary);
    return 0;
}