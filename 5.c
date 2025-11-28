// write a program to convert temperature from celsius to Fahrenheit

#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in celsius:");
    // Input temperature in celsius
    scanf("%f", &celsius);
    // conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;
    // output
    printf(" Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}