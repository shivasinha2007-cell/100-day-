// Q94 (Strings) Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[1000];
    char longest[1000], word[1000];
    int maxLen = 0, len;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int i = 0, j = 0;

    while (sentence[i] != '\0' && sentence[i] != '\n')
    {

        if (sentence[i] != ' ')
        {
            word[j++] = sentence[i];
        }
        else
        {
            if (j != 0)
            {
                word[j] = '\0';
                len = strlen(word);
                if (len > maxLen)
                {
                    maxLen = len;
                    strcpy(longest, word);
                }
                j = 0;
            }
        }
        i++;
    }

    if (j != 0)
    {
        word[j] = '\0';
        len = strlen(word);
        if (len > maxLen)
        {
            strcpy(longest, word);
        }
    }

    printf("Longest word: %s\n", longest);

    return 0;
}
