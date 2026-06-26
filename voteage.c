#include <stdio.h>

int main() {
    int myage;
    int voteage = 18;
    printf("Enter your age: ");
    scanf("%d", &myage);
    (myage >= voteage) ? printf("Old enough to vote\n") : printf("Not old enough to vote\n");
    return 0;
}
