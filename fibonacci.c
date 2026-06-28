#include <stdio.h>
#include <sys/types.h>

int fibonacci(int n) {
    return (n <= 1) ? n : fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    while (n < 1)
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        if (n < 1) {
            printf("Invalid input. Please enter a positive integer.\n");
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("Fibonacci number at position %d is %d\n", i + 1, fibonacci(i));
    }
    return 0;
}
