#include <iostream>
#include "FlightExtended.h"

// перегрузка метода инициализации
void FlightExtended::Init(float pr, int cap, int linens_p)
{
    Flight::Init(pr, cap); // вызов базового метода
    linens_percent = linens_p;
}

// перегрузка метода Display
void FlightExtended::Display()
{
    Flight::Display(); // вызов базового метода
    printf("Процент оплачивающих = %d\n", linens_percent);
}

// установить значение полю linens_percent
void FlightExtended::setLinensPercent(int percent)
{
    linens_percent = percent;
}

// возвращает значение поля linens_percent
int FlightExtended::getLinensPercent()
{
    return linens_percent;
}

// ожидаемый доход (перегрузка)
float FlightExtended::getExpectedIncome()
{
    return price * capacity + (50 * capacity * linens_percent / 100);
}