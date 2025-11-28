// write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>
int main()
{
    int n, sum = 0, i = 1;
    printf("Enter a postive intger:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)

    {
        sum += i;
    }
    printf("sum=%d\n", sum);
    return 0;
}