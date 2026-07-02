#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Enter number of students: ");
    int num_students;
    scanf("%d", &num_students);
    char *ptr[num_students];
    for (int i = 0; i < num_students; i++)
    {
        printf("Enter first name of student %d: ", i + 1);
        char name[50];
        scanf("%s", name);
        ptr[i] = malloc(sizeof(name));
        strcpy(ptr[i], name);
    }
    for (int i = 0; i < num_students; i++)
    {
        printf("Student %d: %s\n", i + 1, ptr[i]);
    }
    for (int i = 0; i < num_students; i++)
    {
        free(ptr[i]);
    }
    return 0;
}
