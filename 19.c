// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
#include <math.h>

int main()
{
    printf("Enter the lengths of the three sides of the triangle :");
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c)
        printf(" The equilateral triangle");
    else if (a == b || b == c || c == a)
        printf("The isosceles triangle");
    else
        printf("The scalene triangle");
    return 0;
}