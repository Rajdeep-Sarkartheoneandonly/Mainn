#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct car
{
    char brand[50];
    int year;
    float price;
};

int main()
{
    printf("Enter number of cars: ");
    int count;
    scanf("%d", &count);
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    struct car *ptr = malloc(count * sizeof(struct car));
    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    for (int i = 0; i < count; i++)
    {
        char name[50];
        printf("Enter brand of car %d:", i + 1);
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';
        strcpy(ptr[i].brand, name);
        printf("Enter year of car %d: ", i + 1);
        scanf("%d", &ptr[i].year);
        printf("Enter price of car %d: ", i + 1);
        scanf("%f", &ptr[i].price);
        while ((c = getchar()) != '\n' && c != EOF);
    }
    for (int i = 0; i < count; i++)
    {
        printf("Car %d: %s %d $%.2f\n", i + 1, ptr[i].brand, ptr[i].year, ptr[i].price);
    }
    free(ptr);
    return 0;
}
