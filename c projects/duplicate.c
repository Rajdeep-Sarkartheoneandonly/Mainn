#include <stdio.h>
#include <string.h>

int main()
{
    char input[100];
    char output[100];
    int count_output = 0;
    printf("Enter a string: ");
    fgets(input, 100, stdin);
    for (int i = 0; i < strlen(input); i++)
    {
        int found = 0;
        char s = input[i];
        for (int j = 0; j < count_output; j++)
        {
            if (s == output[j])
            {
                found = 1;
                break;
            }
        }
        if (!(found))
        {
            output[count_output] = s;
            count_output++;
        }
    }
    printf("Duplicate: %s", output);

    return 0;
}
