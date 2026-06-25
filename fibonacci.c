#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
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

    printf("Fibonacci number at position %d is %d\n", n, fibonacci(n-1));
    return 0;
}
