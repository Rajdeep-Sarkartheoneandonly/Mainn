#include <stdio.h>

int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    int binary[32];
    int flag = 0;
    for (int i=31; i>=0; i--) {
        int bin = decimal >> i & 1;
        binary[i] = bin;
        printf("%d", binary[i]);
    }
    return 0;
}
