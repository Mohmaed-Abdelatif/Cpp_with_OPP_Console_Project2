#include "hourlyimployee.h"

hourlyimployee::hourlyimployee()
{
	m_hours = 0;
	m_rate = 0;
}

hourlyimployee::hourlyimployee(double h, double r)
{
	m_hours = h;
	m_rate = r;

}

void hourlyimployee::addhours(double h)
{
	m_hours += h;
}

void hourlyimployee::read()
{
	employee::read();
	cout << "Hours: ";
	cin >> m_hours;
	cout << "Rate: ";
	cin>>m_rate;
}

double hourlyimployee::get_salary()
{
	return m_rate*m_hours;
}

void hourlyimployee::print()
{
	employee::print();
	cout << "\nHours Worked: " << m_hours
		<< "\nRate: " << m_rate;
}
