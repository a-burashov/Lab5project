#include <iostream>
#include "Flight.h"

// ����� ������������� Init
void Flight::Init(float pr, int cap)
{
    price = pr;
    capacity = cap;
}

// ���� ������ �������������
void Flight::Read()
{
    printf("������� ������ ��� �����: ");
    scanf_s("%f %d", &price, &capacity);
}

// ����� ������ Display
void Flight::Display()
{
    printf("\n���� = %.2f   ��������������� = %d   ", price, capacity);
}

// ���������� �������� ���� price
float Flight::getPrice()
{
    return price;
}

// ���������� �������� ���� capacity
int Flight::getCapacity()
{
    return capacity;
}

// �����, ������������ ����� ��� ������ ������������� (��������� �����)
float Flight::getExpectedIncome()
{
    return price * capacity;
}
