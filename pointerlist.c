#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct list
{
  int *data;
  int numitems;
  int size;
};

void addtolist(struct list *mylist, int item)
{
    if ((mylist->numitems) == (mylist->size))
    {
        int newsize = mylist->size + 10;
        int *tmp = realloc(mylist->data, newsize * sizeof(int));
        if (tmp == NULL)
        {
            printf("Memory allocation failed.\n");
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
    mylist.data = malloc(mylist.size * sizeof(int));
    if (mylist.data == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    amount = 44;
    for (i = 0; i < amount; i++)
    {
        addtolist(&mylist, i+1);
    }
    for (j = 0; j < mylist.numitems; j++)
    {
        printf("%d ", mylist.data[j]);
    }
    printf("\n");
    free(mylist.data);
    mylist.data = NULL;
    return 0;
}
