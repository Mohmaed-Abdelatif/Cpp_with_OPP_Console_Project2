#include "HRsystem.h"

HRsystem::HRsystem(int empsize=50)
{
	m_employeesize = empsize;
	employeelist = new employee * [m_employeesize];
	m_employeecount = 0;

}

HRsystem::~HRsystem()
{ 
	//همسح العناصر اللي جوة الاراي اوف بوينتر الاول اللي هيا employee
	//بعد كدة همسح الاراي نفسة اللي هو employee list
	for (size_t i = 0; i < m_employeesize; i++)
	{
		delete employeelist[i];  //for pointer i will make, when make addemployee with new too
	}
	delete[]employeelist;  //for new above
}

void HRsystem::addemployee()
{
	int n=-1;
	while (n!=0)
	{
		system("cls");
		int ty;
		cout << "Employee Type\n"
			<< "1- Salary\n"
			<< "2- Manegar\n"
			<< "3- Commission\n"
			<< "4- Hourly\n"
			<< "5- Return To Main Menu\n";
		cin >> ty;
		switch (ty)
		{
			//when i make ->read() it is benefit of polimorphism and inheritans
		case 1:
			employeelist[m_employeecount ++] = new salaredemployee();
			employeelist[m_employeecount-1]->read();
			break;
		case 2:
			employeelist[m_employeecount++] = new manegaremployee();
			employeelist[m_employeecount-1]->read();
			break;
		case 3:
			employeelist[m_employeecount++] = new commissionemployee();
			employeelist[m_employeecount-1]->read();
			break;
		case 4:
			employeelist[m_employeecount++] = new hourlyimployee();
			employeelist[m_employeecount-1]->read();
			break;
		case 5:
			return;
		default:
			cout << "Invalid Choice, Tay Again...";
			Sleep(3000);
			break;
		}
	}
	
}

void HRsystem::showall()
{
	cout << "Employee list\n";
	for (size_t i = 0; i <m_employeecount; i++)
	{
		cout << "\n-----------------------\n";
		employeelist[i]->print();
	}
}

void HRsystem::calctoralpay()
{
	int total = 0;
	for (size_t i = 0; i < m_employeecount; i++)
	{
		total+= employeelist[i]->get_salary();

	}
	cout << "Total Pay\n";
	cout << total<<endl;
}
