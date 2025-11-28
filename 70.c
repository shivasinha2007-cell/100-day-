// Rotate an array to the right by k positions.

#include <stdio.h>

int main()
{
    int n, i, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    k = k % n;

    int temp;

    for (i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    for (i = 0; i < k / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[k - 1 - i];
        arr[k - 1 - i] = temp;
    }

    for (i = k; i < (n + k) / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - (i - k)];
        arr[n - 1 - (i - k)] = temp;
    }

    printf("Array after rotating right by %d positions:\n", k);
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
