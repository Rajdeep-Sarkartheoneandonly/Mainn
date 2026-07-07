#include <stdio.h>
#include <string.h>


int main() {
    char str[100];
    char output[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int count = 1;
    for (int i = 0; i < strlen(str); i++)
    {
        if (i+1 < strlen(str) && str[i] == str[i + 1]) {
            count++;
        } else {
            char temp[20];
            sprintf(temp, "%d%c", count, str[i]);
            strcat(output, temp);
            count = 1;
        }
    }
    printf("%s\n", output);
    return 0;
}
