#include <iostream>
#include "Way.h"

// ����������� �������������
Way::Way(float p1, float p2, Flight f1, FlightExtended f2, char* n)
{
	strcpy_s(name, n);
	percent[0] = p1;
	percent[1] = p2;
	flight_1 = f1;
	flight_2 = f2;
}

// ����� ������������� Init
void Way::Init(float p1, float p2, Flight f1, FlightExtended f2, char* n)
{
	strcpy_s(name, n);
	percent[0] = p1;
	percent[1] = p2;
	flight_1 = f1;
	flight_2 = f2;
}

// ���� ������ �������������
void Way::Read()
{
	float price[2];
	int capacity[2];
	int lin;

	printf("������� ������ ��� ��������: ");
	scanf_s("%f %f %i %f %i %f %i %63s", &percent[0], &percent[1],&lin, &price[0], &capacity[0], &price[1], &capacity[1], name, 63);

	flight_1.Init(price[0], capacity[0]);
	flight_2.Init(price[1], capacity[1], lin);
}

// ����� ������ Display
void Way::Display()
{
	printf("\n------------------------------\n");
	printf("�������: %s\n", name);
	printf("���� �1 | �������������: %.2f | ����: %.2f | �������� �����: %.2f\n", percent[0], flight_1.getPrice(), flight_1.getExpectedIncome() * (percent[0] / 100));
	printf("���� �2 | �������������: %.2f | ����: %.2f | �������� �����: %.2f\n", percent[1], flight_2.getPrice(), flight_2.getExpectedIncome() * (percent[1] / 100));
	printf("------------------------------\n\n");
}

float Way::getRealIncomeSum()
{
	return flight_1.getExpectedIncome() * (percent[0] / 100) + flight_2.getExpectedIncome() * (percent[1] / 100);
}

Flight Way::getMaxExpectedIncome()
{
	if (flight_1.getExpectedIncome() > flight_2.getExpectedIncome())
		return flight_1;
	else
		return flight_2;
}