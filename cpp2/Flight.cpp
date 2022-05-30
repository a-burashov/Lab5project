#include <iostream>
#include "Flight.h"

// метод инициализации Init
void Flight::Init(float pr, int cap)
{
    price = pr;
    capacity = cap;
}

// ввод данных пользователем
void Flight::Read()
{
    printf("Введите данные для рейса: ");
    scanf_s("%f %d", &price, &capacity);
}

// метод вывода Display
void Flight::Display()
{
    printf("\nЦена = %.2f   Вместительность = %d   ", price, capacity);
}

// возвращает значение поля price
float Flight::getPrice()
{
    return price;
}

// возврвщает значение поля capacity
int Flight::getCapacity()
{
    return capacity;
}

// метод, возвращающий доход при полной заполненности (ожидаемый доход)
float Flight::getExpectedIncome()
{
    return price * capacity;
}
