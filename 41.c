// Write a program to swap the first and last digit of a number. (Loops without arrays/strings). //work in progress.

#include <stdio.h>
#include <math.h>

int main()
{
    int num, first, last, digits, swappedNum;
    printf("Enter a number:");
    scanf("%d", &num);

    digits = (int)log10(num);

    first = num / (int)pow(10, digits);
    last = num % 10;

    swappedNum = last * (int)pow(10, digits) + (num % (int)pow(10, digits) / 10) * 10 + first;

    printf("Number after swapping first and last digit : %d\n", swappedNum);

    return 0;
}