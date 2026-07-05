#include <stdio.h>
#include <string.h>

FILE *fileptr;

int main()
{
    fileptr = fopen("Filec.txt", "a");
    if (fileptr == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }
    printf("Enter text: ");
    char text[100];
    fgets(text, 100, stdin);
    fprintf(fileptr, "%s", text);
    fclose(fileptr);
    fileptr = fopen("Filec.txt", "r");
    if (fileptr == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }
    char buffer[100];
    while (fgets(buffer, 100, fileptr) != NULL)
    {
        printf("%s", buffer);
    }
    fclose(fileptr);
    return 0;
}
