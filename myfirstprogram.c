#include <stdio.h>

int main() {
    int mynum = 15;
    float myfloat = 5.99;
    char myletter = 'D';
    float value = (float) mynum/myfloat;
    printf("Hello World!\n");
    printf("%d\n", mynum);
    printf("%f\n", myfloat);
    printf("%c\n", myletter);
    printf("%f\n", value);
    printf("%d, %f, %c\n", mynum, myfloat, myletter);
    return 0;
}
