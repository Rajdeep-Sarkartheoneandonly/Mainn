#include <stdio.h>

int collatz(int n, int steps)
{
    if (n == 1) {
        return steps;
    } else if (n % 2 == 0) {
        return collatz(n / 2, steps + 1);
    } else {
        return collatz(3 * n + 1, steps + 1);
    }
}

int main() {
    int n;
    int steps = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Steps: %d\n", collatz(n, steps));
    return 0;
}
