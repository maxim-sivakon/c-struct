#include <stdio.h>

struct company
{
    char name[20];
    char country[20];
};
struct car
{
    char title[20];
    int price;
    struct company manufacturer;
};

void output(struct car funcCar)
{
    printf("Модель автомобиля: %s\n", funcCar.title);
    printf("Цена автомобиля: %d руб.\n", funcCar.price);
    printf("Марка автомобиля: %s\n", funcCar.manufacturer.name);
    printf("Страна: %s\n", funcCar.manufacturer.country);
}

int main(void)
{
    struct car myCar = {"Audi", 10000, {"Volkswagen Group", "Германия"}};
    //                 {title, price, {manufacturer.name, manufacturer.country}};

    printf("Enter - Модель автомобиля: ");
    scanf("%s", myCar.title);

    printf("Enter - Цена автомобиля: ");
    scanf("%d", &myCar.price); // знак & указываем для целого числа

    printf("Enter - Марка автомобиля: ");
    scanf("%s", myCar.manufacturer.name);

    printf("Enter - Страна: ");
    scanf("%s", myCar.manufacturer.country);

    printf("\n= = = = = = = = = = = = = = = = = = = = =\n\n");

    output(myCar);

    return 0;
}