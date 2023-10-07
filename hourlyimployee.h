#pragma once
#include "employee.h"
class hourlyimployee :
    public employee
{
    double m_hours;
    double m_rate;
public:
    hourlyimployee();
    hourlyimployee(double,double);
    void addhours(double);
    void read();
    double get_salary();
    void print();
};

