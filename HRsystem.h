#pragma once
#include"employee.h"
#include<cstdlib> // system
#include<windows.h> //sleep
#include"salaredemployee.h"
#include"manegaremployee.h"
#include"commissionemployee.h"
#include"hourlyimployee.h"
class HRsystem
{
private:
	/* "polimorphism"
	2pointer __**
	'first__* coz elements of array are pointer'
	'second__ * coz array are "dinamic" number of element can increse' *i can make ststic wihe one pointe but i will make namber of element not change
	
	when you creat object , object must be dinamic   <--*
	 this pointer must -> with object created by 'new',and musst make delet for it in destractor  <--*

	 emplyeelist wirth 2 pointer
	 so when i want to go to method i need **
	 first يوصل ل array of employee كلة "employeelist"
	 second يوصل ل  element in this array "every employee in employee list"
	*/
	employee** employeelist;
	int m_employeecount;
	int m_employeesize;


public:

	HRsystem(int);
	~HRsystem();
	void addemployee();
	void showall();
	void calctoralpay();
};

