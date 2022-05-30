#pragma once
#include "Flight.h"
#include "FlightExtended.h"
// Маршрут
class Way
{
private:
	char name[64];
	float* percent = new float[2];
	Flight flight_1;
	FlightExtended flight_2;

public:
	Way(float p1, float p2, Flight f1, FlightExtended f2, char* n);
	void Init(float p1, float p2, Flight f1, FlightExtended f2, char* n);
	void Read();
	void Display();

	float getRealIncomeSum();
	Flight getMaxExpectedIncome();
};