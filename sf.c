#include <stdio.h>

int main()
{
    int x = 50;
    int y = 3;
    printf("%d\n", x);
    printf("%d\n", ~x);
    printf("%d\n", y);
    printf("%d\n", ~y);
    printf("%d\n", x & y);
    printf("%d\n", x | y);
    printf("%d\n", x ^ y);
    printf("%d\n", x << 1);
    printf("%d\n", x >> 1);
    return 0;
}
