#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int i = a;
    if (b<a)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    while(i > 0)
    {
        if(a % i == 0 && b % i == 0)
        {
            printf("GCD: %d\n", i);
            break;
        }
        i--;
    }
    return 0;
}
