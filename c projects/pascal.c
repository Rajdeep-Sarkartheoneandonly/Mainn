#include <stdio.h>

int combination(int n, int k)
{
    if (k == 0 || k == n)
        return 1;
    return combination(n - 1, k - 1) + combination(n - 1, k);
}

int main()
{
    printf("Enter no of rows: ");
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", combination(i, j));
        }
        printf("\n");
    }
    return 0;
}
