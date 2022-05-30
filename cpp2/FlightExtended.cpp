#include <iostream>
#include "FlightExtended.h"

// ���������� ������ �������������
void FlightExtended::Init(float pr, int cap, int linens_p)
{
    Flight::Init(pr, cap); // ����� �������� ������
    linens_percent = linens_p;
}

// ���������� ������ Display
void FlightExtended::Display()
{
    Flight::Display(); // ����� �������� ������
    printf("������� ������������ = %d\n", linens_percent);
}

// ���������� �������� ���� linens_percent
void FlightExtended::setLinensPercent(int percent)
{
    linens_percent = percent;
}

// ���������� �������� ���� linens_percent
int FlightExtended::getLinensPercent()
{
    return linens_percent;
}

// ��������� ����� (����������)
float FlightExtended::getExpectedIncome()
{
    return price * capacity + (50 * capacity * linens_percent / 100);
}