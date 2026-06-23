#include <stdio.h>

int main() {
    int ages[] = {5,97,58,42,31,52,16,74,68,35,29,23};
    float avg, sum = 0;
    int min = ages[0];
    int max = ages[0];
    int i;
    int length = sizeof(ages) / sizeof(ages[0]);
    for (i = 0; i < length; i++) {
        sum += ages[i];
        if (ages[i] < min) {
            min = ages[i];
        }
        if (ages[i] > max) {
            max = ages[i];
        }
    }
    avg = sum / length;
    printf("Average age: %.2f\n", avg);
    printf("Minimum age: %d\n", min);
    printf("Maximum age: %d\n", max);
    return 0;
}
