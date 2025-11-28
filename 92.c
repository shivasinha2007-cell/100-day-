// Q92 (Strings) Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main()
{
    char str[1000];
    int freq[26] = {0};
    int i = 0;
    char firstRepeat = '\0';

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            freq[str[i] - 'a']++;
            if (freq[str[i] - 'a'] == 2)
            {
                firstRepeat = str[i];
                break;
            }
        }
        i++;
    }

    if (firstRepeat != '\0')
    {
        printf("First repeating lowercase alphabet: %c\n", firstRepeat);
    }
    else
    {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}
