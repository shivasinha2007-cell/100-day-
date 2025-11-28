// Q98 (Strings) Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char name[1000];
    int i, lastSpace = -1;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
        {
            lastSpace = i;
        }
    }

    printf("Formatted name: ");

    for (i = 0; i <= lastSpace; i++)
    {
        if (i == 0 || (name[i - 1] == ' ' && name[i] != ' '))
        {
            printf("%c.", toupper(name[i]));
        }
    }

    if (lastSpace != -1)
    {
        for (i = lastSpace + 1; name[i] != '\0'; i++)
        {
            printf("%c", name[i]);
        }
    }

    printf("\n");
    return 0;
}
