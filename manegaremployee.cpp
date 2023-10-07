#include "manegaremployee.h"

manegaremployee::manegaremployee()
{
	m_bouns = 0;
}

manegaremployee::manegaremployee(double bouns)
{
	m_bouns = bouns;
}

void manegaremployee::read()
{
	salaredemployee::read();
	cout << "Bouns: ";
	cin >> m_bouns;

}

double manegaremployee::get_salary()
{
	return m_salary+m_bouns;
}

void manegaremployee::print()
{
	employee::print();
	cout << "\nBouns: " << m_bouns;
}
