#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct list
{
  char **data;
  int numitems;
  int size;
};

void addtolist(struct list *mylist, char *item)
{
    if ((mylist->numitems) == (mylist->size))
    {
        int newsize = mylist->size + 10;
        char **tmp = realloc(mylist->data, newsize * sizeof(char *));
        if (tmp == NULL)
        {
            printf("Memory allocation failed!\n");
            return;
        }
        mylist->data = tmp;
        mylist->size = newsize;
    }
    mylist->data[mylist->numitems] = item;
    mylist->numitems++;
}
int main()
{
    struct list mylist;
    int amount;
    int i, j;
    mylist.numitems = 0;
    mylist.size = 10;
    mylist.data = malloc(mylist.size * sizeof(char *));
    if (mylist.data == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    amount = 4;
    for (i = 0; i < amount; i++)
    {
        printf("Enter item %d: ", i+1);
        char item[100];
        scanf("%99s", item);
        char *itemptr = malloc(strlen(item) + 1);
        if (itemptr == NULL)
        {
            printf("Memory allocation failed!\n");
            for (int k = 0; k < mylist.numitems; k++)
            {
                free(mylist.data[k]);
            }
            free(mylist.data);
            return 1;
        }
        strcpy(itemptr, item);
        addtolist(&mylist, itemptr);
    }
    for (j = 0; j < mylist.numitems; j++)
    {
        printf("%s ", mylist.data[j]);
    }
    for (j = 0; j < mylist.numitems; j++)
    {
        free(mylist.data[j]);
    }
    printf("\n");
    free(mylist.data);
    mylist.data = NULL;
    return 0;
}
