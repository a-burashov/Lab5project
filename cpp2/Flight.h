#pragma once
// ����
class Flight
{
protected:
    float price; // ���� ������
    int capacity; // ����������� ����������

public:
    void Init(float pr, int cap);
    void Read();
    void Display();

    int getCapacity(); // ����� ���������� ���� capacity
    float getPrice(); // ����� ���������� ���� price
    float getExpectedIncome(); // ��������� �����
};
