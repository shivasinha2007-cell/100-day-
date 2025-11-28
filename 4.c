// Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
#include <math.h>

int main()
{
    float radius, area, circumference;
    printf("Enter the radius of the circle:");

    scanf("%f", &radius);

    area = M_PI * radius * radius;
    circumference = 2 * M_PI * radius;

    printf("Area of the circle: %.2f\n", area);
    printf("circumference of the circle : %.2f\n", circumference);

    return 0;
}