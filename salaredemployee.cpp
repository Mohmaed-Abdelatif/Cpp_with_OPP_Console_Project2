#include "salaredemployee.h"

salaredemployee::salaredemployee()
{
	m_salary = 0;
}

salaredemployee::salaredemployee(double salary)
{
	m_salary = salary;
}

void salaredemployee::read()
{
	employee::read();
	cout << "Salary: ";
	cin >> m_salary;
}

double salaredemployee::get_salary()
{
	return m_salary;
}

void salaredemployee::print()
{
	employee::print();
	cout << "\nsalary: " << m_salary;
}
