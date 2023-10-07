#pragma once
#include "employee.h"
class salaredemployee :
    public  employee
{
protected:
    double m_salary;
public:
    salaredemployee();
    salaredemployee(double);
    void read();
    double get_salary();
    void print();
};

