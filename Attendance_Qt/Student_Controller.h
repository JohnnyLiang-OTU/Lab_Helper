#pragma once
#include "Database_Controller.h"
#include <iostream>
class Student_Controller: Database_Controller
{
private:

public:
	Student_Controller();
	Student_Controller();
	~Student_Controller();
	bool setConnection();
	void addStudent(std::string name, int id, std::string date);
	void editStudent();
	void deleteStudent();
	bool isInTable(std::string name, int id);
};

