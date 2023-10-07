#pragma once
#include "salaredemployee.h"
class manegaremployee :
    public salaredemployee
{
private:
    double m_bouns;
public:
     manegaremployee();
     manegaremployee(double);
     void read();
     double get_salary();
     void print();
        

};

