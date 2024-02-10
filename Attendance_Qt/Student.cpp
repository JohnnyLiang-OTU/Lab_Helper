#include "Student.h"
Student::Student() {}
Student::Student(std::string name, int id)
{
	this->name = name;
	this->id = id;
}
Student::~Student(){}