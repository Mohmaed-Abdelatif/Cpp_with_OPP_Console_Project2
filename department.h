#pragma once
#include<iostream>
#include<string>
using namespace std;

class department
{
private:
	unsigned int m_id;
	string m_name;

public:
	department();
	department(unsigned int,string);
	~department();

	void read();
	void print();
	string getname();
};

