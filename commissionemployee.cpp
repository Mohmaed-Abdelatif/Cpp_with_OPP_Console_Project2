#include "commissionemployee.h"

commissionemployee::commissionemployee()
{
	m_target = 0;
	m_rate = 0.05;
}



commissionemployee::commissionemployee(double target,double rate)
{
	m_target = target;
	m_rate = rate;
}

void commissionemployee::read()
{
	employee::read();
	cout << "Target: ";
	cin >> m_target;
	cout << "Rate: ";
	cin>> m_rate;
}

double commissionemployee::get_salary()
{

	return m_target*m_rate;
}

void commissionemployee::print()
{
	employee::print();
	cout << "\nTarger: " << m_target;
}
