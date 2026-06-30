#include <stdio.h>

struct Car {
    char brand[50];
    int year;
    float price;
};

void updateprice1(struct Car *c, float new_price)
{
    c->price = new_price;
}
int main()
{
    struct Car car1 = {"Toyota", 2020, 20000.0};
    float new_price;
    printf("Enter new price: ");
    scanf("%f", &new_price);
    updateprice1(&car1, new_price);
    printf("Brand: %s, Year: %d, Price: %.2f\n", car1.brand, car1.year, car1.price);
    return 0;
}
