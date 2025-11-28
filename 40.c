// 40.Write a program to find the 1's complement of a binary number and print it. (Loops without arrays/strings). // work in progress

#include <stdio.h>
int main()
{
    long long binaryNum, tempNum, remainder, onesComplement = 0, placeValue = 1;
    printf("Enter a binary number:");
    scanf("%lld", &binaryNum);

    while (binaryNum != 0)
    {
        digit = binaryNum %
                10;

        if (digit == 0)
            complement = 1;
        else if (digit == 1)
            complement = 0;
        else
        {
            printf("Invalid binary number.\n");
        }
