#pragma once
#include <iostream>
class Student
{
private:
	int id;
	std::string name;
	std::string date;

public:
	Student();
	Student(std::string name, int id);
	~Student();
};

