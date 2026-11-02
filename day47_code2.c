#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[200];
    char longest[100] = "";
    char *word;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    word = strtok(sentence, " \n");

    while (word != NULL)
    {
        if (strlen(word) > strlen(longest))
        {
            strcpy(longest, word);
        }

        word = strtok(NULL, " \n");
    }

    printf("Longest word = %s", longest);

    return 0;
}