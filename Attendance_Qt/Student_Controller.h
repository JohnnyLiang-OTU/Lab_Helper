#pragma once
#include <iostream>
#include "libpq-fe.h"
#include <qdebug.h>
class Student_Controller
{
private:

public:
	Student_Controller();
	~Student_Controller();
	bool connection_success(PGconn* conn);
	void addStudent(std::string name, int id, std::string date);
	void editStudent();
	void deleteStudent();
	bool isInTable(int id, std::string name);
	void readTable();
	//bool isInTable(std::string name, int id);
};

