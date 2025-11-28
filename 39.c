// 39. Write a program to find the product of odd digits of a number. (Loops without arrays/strings).

#include <stdio.h>
int main()

{
    int num, digit, product = 1, hasOdd = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        digit = num % 10;
        if (digit % 2 != 0)
        {
            product = product * digit;
            hasOdd = 1;
        }
        num = num / 10;
    }
    if (hasOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found in the number .\n");

    return 0;
}