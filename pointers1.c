#include <stdio.h>
#include <stdlib.h>

int main()
{
    int stnt[20];
    printf("%zu\n", sizeof(stnt));
    int *students;
    int numstudents = 12;
    students = calloc(numstudents, sizeof(students));
    printf("%zu\n", numstudents * sizeof(*students));
    return 0;
}
