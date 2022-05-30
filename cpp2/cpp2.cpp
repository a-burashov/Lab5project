#pragma warning(disable : 4996) .

#define __CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW

#include <iostream>
#include "Flight.h"
#include "Way.h"

int main()
{
    setlocale(LC_ALL, "rus");

    Flight f1;
    FlightExtended f2;

    f1.Init(100.0, 100);
    f2.Init(100.0, 100, 50);

    f1.Display();
    f2.Display();

    char* name = new char[64];
    strcpy(name, "Маршрут 1");
    Way way(100, 100, f1, f2, name);
    way.Display();

    std::cout << "Ожидаемый доход (f1): " << f1.getExpectedIncome() << std::endl;
    std::cout << "Ожидаемый доход (f2): " << f2.getExpectedIncome() << std::endl;

    Flight f = way.getMaxExpectedIncome();
    f.Display();

    _CrtDumpMemoryLeaks();
    system("pause");
}