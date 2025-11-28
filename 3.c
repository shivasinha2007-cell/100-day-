// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main()
{
    int length, breath, area, perimeter;
    printf("Enter length and breadth of rectangle:");
    scanf("%d %d", &length, &breath);
    area = length * breath;
    perimeter = 2 * (length + breath);
    printf("Area = %d\n", area);
    printf("perimeter = %d\n", perimeter);
    return 0;
}