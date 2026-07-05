#include <stdio.h>
#include <string.h>

int main()
{
    printf("Enter sentence: ");
    char sentence[100];
    fgets(sentence, 100, stdin);
    char *buffer = strtok(sentence, " ,.!?-;:\n");
    char max_length_word[100];
    strcpy(max_length_word, buffer);
    while (buffer != NULL)
    {
        if (strlen(buffer) > strlen(max_length_word))
        {
            strcpy(max_length_word, buffer);
        }
        buffer = strtok(NULL, " ,.\n");
    }
    printf("Longest word: %s\n", max_length_word);
    return 0;
}
