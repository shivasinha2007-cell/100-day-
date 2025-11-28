// Write a program to implement a basic calculator using switch-case for +, -, *, /, %
#include <stdio.h>
int main()
{
    int a, b;
    char op;
    scanf("%d %c %d", &a, &op, &b);
    switch (op)
    {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '*':
        printf("%d", a * b);
        break;
    case '/':
        b ? printf("%d", a / b) : printf("Div by 0");
        break;
    case '%':
        b ? printf("%d", a % b) : printf("Mod by 0");
        break;
    default:
        printf("Invalid");
    }
}
