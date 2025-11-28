// Q96 (Strings) Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

void reverseWord(char str[], int start, int end)
{
    char temp;
    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    char sentence[1000];
    int i = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // remove newline if present
    sentence[strcspn(sentence, "\n")] = '\0';

    while (1)
    {
        if (sentence[i] == ' ' || sentence[i] == '\0')
        {
            reverseWord(sentence, start, i - 1); // reverse current word
            start = i + 1;                       // move to next word
        }
        if (sentence[i] == '\0')
            break;
        i++;
    }

    printf("Sentence after reversing each word: %s\n", sentence);

    return 0;
}
