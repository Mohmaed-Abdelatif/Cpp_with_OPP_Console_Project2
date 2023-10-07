#include "employee.h"

employee::employee()
{
	m_id = 0;
	m_name = "Unknown";
	m_phone = "Not Exist";
	m_email = "Not Exist";
	m_job = "Unknown";
	m_department = nullptr;
}

employee::employee(int id, string n, string ph, string em, string j) :
	m_id(), m_name(n), m_phone(ph),m_email(em),m_job(j)
{
}

employee::~employee()
{

}
void employee::read()
{
	cout << "Enter ID: ";
	cin >> m_id;
	cout << "Enter Name: ";
	cin >> m_name;
	cout << "Enter Phone: ";
	cin >> m_phone;
	cout << "Enter Email: ";
	cin >> m_email;
	cout << "Enter Job: ";
	cin >> m_job;

}

void employee::print()
{
	cout << "ID: " << m_id
		<< "\nName: " << m_name
		<< "\nPhone: " << m_phone
		<< "\nEmail: " << m_email
		<< "\nJop: " << m_job;
	if (m_department!=nullptr)
	{
		cout << "\nDepartment: " << m_department->getname();

	}
	else
	{
		cout << " ";
	}
}
