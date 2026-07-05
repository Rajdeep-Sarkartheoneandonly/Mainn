#include <stdio.h>

float to_fahrenheit(float celsius)
{
    return (celsius * 9 / 5) + 32;
}
float to_celsius(float fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}

int main()
{
    float celsius, fahrenheit;
    printf("Do you wish to convert to :\n 1. Celsius\n 2. Fahrenheit\n ");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &fahrenheit);
            printf("Temperature in Celsius: %.2f\n", to_celsius(fahrenheit));
            break;
        case 2:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &celsius);
            printf("Temperature in Fahrenheit: %.2f\n", to_fahrenheit(celsius));
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
    return 0;
}
