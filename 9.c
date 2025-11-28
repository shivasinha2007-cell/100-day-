// write a program to calculate simple and compound interest for given prinicipal rate and time.

#include <stdio.h>
#include <math.h>
int main()
{
    float principal, rate, time, SI, CI, amount;
    printf("Enter principal , rate and time\n");
    scanf("%f %f %f ", &principal, &rate, &time);
    SI = (principal * rate * time) / 100;
    amount = principal * pow((1 + rate / 100), time);
    CI = amount - principal;
    printf("Simple Interest = %2f\n", SI);
    printf("Compund Interest = %2f\n", CI);
    return 0;
}
