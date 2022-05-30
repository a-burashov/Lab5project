#pragma once
// Рейс
class Flight
{
protected:
    float price; // цена билета
    int capacity; // вместимость пассажиров

public:
    void Init(float pr, int cap);
    void Read();
    void Display();

    int getCapacity(); // метод возвращает поле capacity
    float getPrice(); // метод возвращает поле price
    float getExpectedIncome(); // ожидаемый доход
};
