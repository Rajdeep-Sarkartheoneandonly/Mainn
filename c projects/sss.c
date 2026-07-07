#include <stdio.h>

int main() {
    unsigned long long arr[100];
    int count = 0;
    char next_char;

    printf("Enter integers separated by spaces (Press Enter to finish):\n");
    do {
        // %d reads the integer, %c captures the space or newline following it
        if (scanf("%llu%c", &arr[count], &next_char) >= 1) {
            count++;
        }
    } while (next_char != '\n' && count < 100);

    for (int i = 0; i < count; i++) {
        printf("%llu ", arr[i]-1);
    }
    return 0;
}
