#pragma once
#include "employee.h"
class commissionemployee :
    public employee
{
private:
    double m_target;
    double m_rate;
public:
    commissionemployee();
    commissionemployee(double,double);
    void read();
     double get_salary();

     void print();
};

