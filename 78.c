// Q78 (2D Arrays)  Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        sum += matrix[i][i];
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}
