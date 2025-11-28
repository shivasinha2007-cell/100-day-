// Q83 (Strings)  Count vowels and consonants in a string.

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[1000];
    int vowels = 0, consonants = 0, i = 0;
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n')
    {
        ch = tolower(str[i]);

        if ((ch >= 'a' && ch <= 'z'))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        i++;
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    return 0;
}
