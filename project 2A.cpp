#include <iostream>
using namespace std;
#include<string>
#include<cstdlib> // system
#include<windows.h> //sleep
#include "department.h"
#include"HRsystem.h"


//department data
int depart_size = 10;
int depart_count = 0;
department* depart = new department[depart_size];

void handle_department() {
	int n = -1;
	while (n!=0)
	{
		cout << "==== ## Handle Department ====\n"
			<< "1- Add New Department\n"
			<< "2- Print All Department\n"
			<< "3- Return To Main Menu\n"
			<< "=============================\n";
		cin >> n;
		switch (n)
		{
		case 1:
			if(depart_count<depart_size){
			depart[depart_count ++].read();
			}
			else {
				cout << "NO size valid to New department\n";
			}
		case 2:
			for (size_t i = 0; i < depart_count; i++)
			{
				depart[i].print();
			}
			break;
		case 3:
			return;
		default:
			cout << "Invalid Choice, Tay Again...";
			Sleep(3000);
			break;
		}

	}
}

HRsystem emplyee_(100);

void handle_employee() {
	int n = -1;
	while (n != 0)
	{
		cout << "==== ## Handle Employee ====\n"
			<< "1- Add New Employee\n"
			<< "2- Edit Employee\n"
			<< "3- Delet Employee\n"
			<< "4- Find Employee\n"
			<< "5- Show All Employee\n"
			<< "6- Total Payroll\n"
			<< "7- Return To Main Menu\n"
			<< "=============================\n";
		cin >> n;
		switch (n)
		{
		case 1:
			emplyee_.addemployee();
			break;
		case 2:
		case 3:

		case 4:

		case 5:
			emplyee_.showall();
			break;
		case 6:
			emplyee_.calctoralpay();
			break;
		case 7:
			return;
		default:
			cout << "Invalid Choice, Tay Again...";
			Sleep(3000);
		}

	}

}

int main()
{
	
	int n = -1;
	while (n!=0)
	{
		
		cout << "\n===========================\n"
			<< "1- Dapartment File\n"
			<< "2- Employee File\n"
			<< "0- Exit Appliction\n"
			<< "===========================\n";
		cin >> n;
		switch (n)
		{
		case 1:
			handle_department();
			break;
		case 2:
			handle_employee();
			break;
		case 0:
			cout << "Thanks...\n";
			return 0;
		default:
			cout << "Invalid Choice, Tay Again...";
			Sleep(3000);
			break;
		}


	}

	return 0;
}
