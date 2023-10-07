#pragma once
#include<iostream>
using namespace std;
#include<string>
#include"department.h"

class employee
{
protected:
	int m_id;
	string m_name;
	string m_phone;
	string m_email;
	string m_job;
	department* m_department;
	//benifit benifitlist

public:
	employee();
	employee(int, string, string, string, string);
	~employee();
	virtual void read();
	virtual double get_salary() = 0;
	virtual void print();

};

