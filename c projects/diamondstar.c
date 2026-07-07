#include <stdio.h>

int main()
{
    int n = 0;
    while (n%2 == 0)
    {
        printf("Enter the number of rows: ");
        scanf("%d", &n);
    }
    printf("n = %d\n", n);
    for (int i = 0; i < (n+1)/2; i++)
    {
        int x = n-i;
        for (int j = 0; j < x; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2*i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = (n-3)/2; i >= 0; i--)
    {
        int x = n-i;
        for (int j = 0; j < x; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2*i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
