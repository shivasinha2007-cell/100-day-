// Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    float root 1, root 2, discriminant;
    printf("Enter coefficients a b c :");
    scanf("%d %d %d ", a, b, c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
    {
        root 1 = (-b + sqrt(discriminant)) / (2 * a);
        root 2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and differnet .\n");
        printf("Root 1 = %.2f\n", root 1);
        printf("Root 2 = %.2f\n", root 2);
    }
    else if (discriminant == 0)
    {
        root 1 = root 2 = -b / (2 * a);
        printf("Roots are real and same .\n");
        printf("Root 1 = Root 2 = %.2f\n", root 1);
    }
    else
    {
        float realPart = -b / (2 * a);
        float imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and differnt .\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}
