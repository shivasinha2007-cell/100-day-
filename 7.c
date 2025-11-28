// 1.rite a program to swap two numbers without using third variable.

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers to swap;");

    scanf(" %d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a=%d b=%d \n", a, b);

    return 0;
}

// 2.write a program to swap two numbers without using thrid variable.

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers to swap;");

    scanf(" %d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: %d %d \n", a, b);

    return 0;
}
