#include "department.h"

department::department()
{

}

department::department(unsigned int id, string name):m_id(id),m_name(name)
{
}

department::~department()
{
}

void department::read()
{
	cout << "Enter ID: ";
	cin >> m_id;
	cout << "Enter Name: ";
	cin >> m_name;
}

void department::print()
{
	cout << "----------------------\n";

	cout << "ID: " << m_id << endl;
	cout << "Name: " << m_name << endl;
}

string department::getname()
{
	return m_name;
}
