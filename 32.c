// Write a program to check if a number is a palindrome.

#include <stdio.h>
int main()
{
    int n, rev = 0, rem, original;
    printf("Enter a number: ");
    scanf(" %d ", &n);
    original = n;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if (original == rev)
    {
        printf("The number is a palindrome.\n");
    }
    else
    {
        printf("The number is not a palindrome.\n");
    }
    return 0;
}
