#include <stdio.h>

struct transport
{
    char carName[10];
    int dateCreate;
    int startOperation;
    int endOperation;
    int countOwners;
    float wheelSize;
};

int workYear(int a, int b)
{
    return a - b;
}

int main(void)
{
    struct transport bicycleZero = {"Volga", 1998, 1999, 2023, 4, 12.3};

    struct transport bicycleOne = bicycleZero;

    printf("Дай имя транспорту: ");
    scanf("%s", bicycleOne.carName);
    printf("Имя транспорта %s\n\n", bicycleOne.carName);
    printf("= = = = = = = = = = = = = = = = = = = = =\n");
    printf("= О-ё-ё-й Кажется я знаю этот транспорт =\n");
    printf("= = = = = =Смотри что нашёл = = = = = = =\n\n");
    printf("Дата создания: %d\n", bicycleOne.dateCreate);
    printf("Дата начала эксплуатации: %d\n", bicycleOne.startOperation);
    printf("Дата окончания эксплуатации: %d\n", bicycleOne.endOperation);
    printf("Кол-во владельцев: %d\n", bicycleOne.countOwners);
    printf("Размер 31 го колеса: %.1f\n", bicycleOne.wheelSize);
    printf("= = = = = = = = = = = = = = = = = = = = =\n");
    printf("%s в эксплуатации %d годика.\n",bicycleOne.carName,  workYear(bicycleOne.endOperation, bicycleOne.startOperation));
    return 0;
}