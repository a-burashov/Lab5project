#include "Flight.h"

#pragma once
// Производный класс
class FlightExtended: public Flight
{
private:
    int linens_percent; // процент оплачивающих постельное белье

public:
    void Init(float pr, int cap, int linens_p);
    void Display(); // перегрузка метода

    int getLinensPercent();
    void setLinensPercent(int percent);
    float getExpectedIncome(); // ожидаемый доход (перегрузка)
};