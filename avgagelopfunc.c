#include <stdio.h>

int maxfunc(int numbers[], int size)
{
    int maxno = numbers[0];
    for (int i = 0; i<size; i++)
    {
        if (numbers[i] > maxno)
        {
            maxno = numbers[i];
        }
    }
    return maxno;
}

int minno(int numbers[], int size)
{
    int minno = numbers[0];
    for (int i = 0; i<size; i++)
    {
        if (numbers[i] < minno)
        {
            minno = numbers[i];
        }
    }
    return minno;
}

float avgfunc(int numbers[], int size)
{
    int sum = 0;
    for (int i = 0; i<size; i++)
    {
        sum += numbers[i];
    }
    return (float)sum / size;
}

int main()
{
    int numbers[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }
    int size = sizeof(numbers) / sizeof(numbers[0]);
    printf("Max: %d\n", maxfunc(numbers, size));
    printf("Min: %d\n", minno(numbers, size));
    printf("Avg: %.2f\n", avgfunc(numbers, size));
    return 0;
}
