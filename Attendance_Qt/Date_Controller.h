#pragma once
#include <iostream>
#include "Database_Controller.h"
class Date_Controller: Database_Controller
{
private:
	std::string currentDate;
public:
	Date_Controller();
	~Date_Controller();
	void addDate();
	void deleteDate();

};

