#include "Flight.h"

#pragma once
// ����������� �����
class FlightExtended: public Flight
{
private:
    int linens_percent; // ������� ������������ ���������� �����

public:
    void Init(float pr, int cap, int linens_p);
    void Display(); // ���������� ������

    int getLinensPercent();
    void setLinensPercent(int percent);
    float getExpectedIncome(); // ��������� ����� (����������)
};